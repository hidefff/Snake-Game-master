#include "bomb.h"
#include <cmath>
#include <iostream>
#include <random>

// update bomb status
void Bomb::UpdateBomb()
{
    if(status == bombstatus::finish){CreateBomb();}
    else if ((status == bombstatus::seed) && (bombcount == bombtime)){ExplodeBomb();}
    else if ((status == bombstatus::explode) && (firecount == firetime)){FinishBomb();}
    
    
    if(status== bombstatus::explode){
        if (firecount < firetime)
        {
            ++firecount;
            }
            else{
                firecount = 0;
                }
    }

    return;
}

void Bomb::CreateBomb(){
    int x, y;
    while(true){

        std::mt19937 engine2{ std::random_device{}() };
        
        x = random_b_w(engine2);
        y = random_b_h(engine2);

        bombseed_x = x;
        bombseed_y = y;

        status = bombstatus::seed;

        return;
        //need to check that whether there is no snake and food
    }
    
}

//change status to bomb
void Bomb::ExplodeBomb(){

    Bomb::fire fire;

    for(float i=-1.0; i<=1.0; i+=1.0){
        fire.fire_x = bombseed_x + i;
        for(float j=-1.0; j<=1.0; j+=1.0){
            fire.fire_y = bombseed_y + j;
            bombarea.push_back(fire);
        }
    }
    
    status = bombstatus::explode;
    
    return;
}

//change status to finish
void Bomb::FinishBomb(){

    bombarea.clear();
    status = bombstatus::finish;

    return;

}