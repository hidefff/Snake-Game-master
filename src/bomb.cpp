#include "bomb.h"
#include "game.h"
#include <cmath>
#include <iostream>

//intialize
Bomb::Bomb(std::size_t grid_width, std::size_t grid_height)
:random_b_w(0, static_cast<int>(grid_width - 1)),
random_b_h(0, static_cast<int>(grid_height - 1)) {}


void Bomb::CreateBomb(){
    int x, y;
    while(true){
        x = random_b_w(engine);
        y = random_b_h(engine);
    }
    bomb_x = x;
    bomb_y = y;

    //need to check that whether there is no snake and food
}

void Bomb::ExplodeBomb(){

}

void Bomb::FinishBomb(){
}