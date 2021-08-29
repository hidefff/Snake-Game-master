#include "bomb.h"
#include <cmath>
#include <iostream>

void Bomb::CreateBomb(){
    int x, y;
    while(true){
        x = random_b_w(engine2);
        y = random_b_h(engine2);
        
        bomb_x = x;
        bomb_y = y;
        
        return;
        
        //need to check that whether there is no snake and food
    }

    
}

void Bomb::ExplodeBomb(){

}

void Bomb::FinishBomb(){
}