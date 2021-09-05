# C++ Capstone Project/Snake Game

## Over all
This is a read me file for Capstone project answer.

## The game summary
This is a game to grow snake avoiding bomb. Food will locate in the game area, and if snake eats it, the snake grows with body. If the body hits snake head, snake will die. In the game area, bomb will located randamory. The bomb of seed is green and when it explodes, its change color and spread. Snake have to grow avoiding this.

## How to operate
Operation is as same as base code. You can control snake by up/down/left/right button.

[](<img src="snake_game.gif"/>)

---
## Rubric Points Required and Result

|CRITERIA item| subitem |line
|---:|:---|---|
|README| A README with instructions is included with the project||
|^|The README indicates which project is chosen|a|
|^|The README includes information about each rubric point addressed||
|Compiling and Testing (All Rubric Points REQUIRED)|The submission must compile and run.||
|Loops, Functions, I/O|||
|^|The project demonstrates an understanding of C++ functions and control structures.||
|^|The project reads data from a file and process the data, or the program writes data to a file.||
|^|The project accepts user input and processes the input.||
|Object Oriented Programming|The project uses Object Oriented Programming techniques.||
|^|Classes use appropriate access specifiers for class members.||
|^|Class constructors utilize member initialization lists.||
|^|Classes abstract implementation details from their interfaces.||
|^|Classes encapsulate behavior.||
|^|Classes follow an appropriate inheritance hierarchy.||
|^|Overloaded functions allow the same function to operate on different parameters.||
|^|Derived class functions override virtual base class functions.||
|^|Templates generalize functions in the project.||
|Memory Management|||
|^|The project makes use of references in function declarations.||
|^|The project uses destructors appropriately.||
|^|The project uses scope / Resource Acquisition Is Initialization (RAII) where appropriate.||
|^|The project follows the Rule of 5.||
|^|The project uses move semantics to move data, instead of copying it, where possible.||
|^|The project uses smart pointers instead of raw pointers.||
|Concurrency|The project uses multithreading.||
|^|A promise and future is used in the project.||
|^|A mutex or lock is used in the project.||
|^|A condition variable is used in the project.||

---

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.


## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
