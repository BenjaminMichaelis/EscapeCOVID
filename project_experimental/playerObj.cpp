#include "playerObj.h"

// player constructor:
PlayerOBJ::PlayerOBJ() {
    // load and set object texture to sprite:
    objTexture.loadFromFile("images/player.png");
    objSprite.setTexture(objTexture);
    objSprite.setPosition(PLAYER_DEFAULT_X, PLAYER_DEFAULT_Y);
    speed = DEFAULT_SPEED;
}

// return the Sprite variable:
sf::Sprite PlayerOBJ::getSprite() { return objSprite; }

// movement function: LEFT
void PlayerOBJ::moveLeft() {
    if (objSprite.getPosition().x > 0) {
        objSprite.move(-speed, 0);
    }
}

// movement function: RIGHT
void PlayerOBJ::moveRight() {
    if (objSprite.getPosition().x < FRAME_WIDTH - PLAYER_W) {
        objSprite.move(speed, 0);
    }
}

// movement function: UP
void PlayerOBJ::moveUp() {
    if (objSprite.getPosition().y > 0) {
        objSprite.move(0, -speed);
    }
}

// movement function: DOWN
void PlayerOBJ::moveDown() {
    if (objSprite.getPosition().y < FRAME_LENGTH - PLAYER_H) {
        objSprite.move(0, speed);
    }
}