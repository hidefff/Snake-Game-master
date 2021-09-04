#include "bomb.h"
#include <cmath>
#include <iostream>
#include <random>

void Bomb::CreateBomb(){
    int x, y;
    while(true){

        std::mt19937 engine2{ std::random_device{}() };
        
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