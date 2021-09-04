#ifndef BOMB_H
#define BOMB_H

#include <random>
#include <vector>
#include "SDL.h"
#include <stdio.h>

class Bomb {
 public:

//Constructor
Bomb(std::size_t grid_width, std::size_t grid_height)
:random_b_w(0, static_cast<int>(grid_width - 1)),
random_b_h(0, static_cast<int>(grid_height - 1)),
//engine2(dev()),
bombseed_x(grid_width / 2),
bombseed_y(grid_height / 2) {
CreateBomb();
};

 //Create Bomb
 void CreateBomb();
 //Explode Bomb
 void ExplodeBomb();
 //Finish Bomb
 void FinishBomb();
 //update Bomb
 void UpdateBomb();
 
 // bomb location
 float bombseed_x;
 float bombseed_y;
 
 //fire area
 class fire{
     public:
     float fire_x;
     float fire_y;
};

 //area of fired
 std::vector<fire> bombarea;

 //define status of bomb
 enum struct bombstatus{
     seed,
     explode,
     finish
 };
 enum bombstatus status;

 private:
 std::mt19937 engine2;
 std::uniform_int_distribution<int> random_b_w;
 std::uniform_int_distribution<int> random_b_h;

};
#endif