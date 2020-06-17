#include "Sound.h"

SFX::SFX()
{
	playerDie.loadFromFile("sfx/gameOver.wav");
	gameOver.setBuffer(playerDie);

	wallCollide.loadFromFile("sfx/wallCollide.wav");
	collide.setBuffer(wallCollide);
}

void SFX::playerHit()
{
	gameOver.play();
}

void SFX::wallHit()
{
	collide.play();
}