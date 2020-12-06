#include "Sound.h"

SFX::SFX()
{
    playerDie.loadFromFile("content/sfx/gameOver.wav");
    gameOver.setBuffer(playerDie);

    wallCollide.loadFromFile("content/sfx/wallCollide.wav");
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