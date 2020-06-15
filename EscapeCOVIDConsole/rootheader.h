#ifndef ROOTHEADER_H
#define ROOTHEADER_H
#include <iostream>
#include <time.h>


using namespace std;


const int PLAYER_W = 15;
const int PLAYER_H = 26;

// base dimension for virus sprite:
const int VIRUS_SIZE = 20;

// base dimension for the effective game-window:
const int FRAME_WIDTH = 300;
const int FRAME_LENGTH = 400;

// default starting location for the player sprite:
const int PLAYER_DEFAULT_X = 150;
const int PLAYER_DEFAULT_Y = 150;

// default moving speed:
const int DEFAULT_SPEED = 5;

// execute a game instance:
void gameInstance();

#endif