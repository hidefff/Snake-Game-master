#ifndef BOMB_H
#define BOMB_H

#include <random>
#include <vector>
#include "SDL.h"




class Bomb {
 public:

//Constructor
Bomb(std::size_t grid_width, std::size_t grid_height)
:random_b_w(0, static_cast<int>(grid_width - 1)),
random_b_h(0, static_cast<int>(grid_height - 1)),
//engine2(dev()),
bomb_x(grid_width / 2),
bomb_y(grid_height / 2) {
CreateBomb();

};

 //Create Bomb
 void CreateBomb();
 //Explode Bomb
 void ExplodeBomb();
 //Finish Bomb
 void FinishBomb();
 
 float bomb_x;
 float bomb_y;
 
 private:
 
 //std::random_device dev;
 std::mt19937 engine2;

 std::uniform_int_distribution<int> random_b_w;
 std::uniform_int_distribution<int> random_b_h;


};
#endif