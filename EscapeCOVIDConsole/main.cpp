// **************************************************************************************************************
// PROJECT: GRAPHICS."ESCAPE_COVID" 
// TEAM: BENJAMIN MICHAELIS, JARED CAMPBELL, KARL NORDEN, TEDDIE HOVANNEC
// Main execution file:
// **************************************************************************************************************
#include "rootheader.h"
#include "Window.h"
#include <iostream>


int main() 
{
	//declare variables
	int score = 0;
	float dx = 0, dy = 0, speed = 5;
	dx = 0;
	dy = 0;

	srand(time(NULL));

	sf::Texture t1, t2; //objects of type texture

	t1.loadFromFile("images/"".png"); //image for the viruses
	t2.loadFromFile("images/"".png"); //image for the person/player

	sf::Sprite S1(t1);//virus sprite
	sf::Sprite S2(t2); //player sprite

    createWindow();

    return 0;
}