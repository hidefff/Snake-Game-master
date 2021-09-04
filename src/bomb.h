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
bombcount(0),
bombseed_x(grid_width / 2),
bombseed_y(grid_height / 2) {
CreateBomb();
//ExplodeBomb();

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

 float bombcount;
 float firecount;

 const float bombtime = 100.0;
 const float firetime = 10.0;

 
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