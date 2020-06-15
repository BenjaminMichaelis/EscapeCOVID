#ifndef ROOTHEADER_H
#define ROOTHEADER_H
#include <iostream>
#include <time.h>
#include <SFML/Graphics.hpp>

using namespace std;

const int PLAYER_W = 15;
const int PLAYER_H = 26;

const int VIRUS_SIZE = 20;

const int FRAME_WIDTH = 300;
const int FRAME_LENGTH = 400;

const int PLAYER_DEFAULT_X = 150;
const int PLAYER_DEFAULT_Y = 150;

const int DEFAULT_SPEED = 5;


// execute a game instance:
void gameInstance();


#endif