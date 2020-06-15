#include "virusObj.h"

// virus constructor:
VirusOBJ::VirusOBJ(PlayerOBJ &player) {
    // load up virus's texture
    objTexture.loadFromFile("images/virus.png");
    objSprite.setTexture(objTexture);
    objSprite.setPosition(PLAYER_DEFAULT_X, PLAYER_DEFAULT_Y);

    // set
    sf::Vector2f playerPos = player.getSprite().getPosition();

    int x = 0, y = 0;
    while (getSprite().getPosition() == playerPos) {
        x = rand() % FRAME_WIDTH;
        y = rand() % FRAME_LENGTH;

        objSprite.setPosition(float(x), float(y));
    }

    dx = dy = float(DEFAULT_SPEED);
    objSprite.move(dx, dy);
}

// auto-movement for the virus:
void VirusOBJ::autoMovement() {
    // get virus position:
    pos = objSprite.getPosition();
    
    // set map limits:
    static int FRAMEX = FRAME_WIDTH - VIRUS_SIZE;
    static int FRAMEY = FRAME_LENGTH - VIRUS_SIZE;

    if (pos.x < 0) {
        dx = DEFAULT_SPEED;
        dy = randSpeed(DEFAULT_SPEED);
    }

    if (pos.x > float(FRAMEX)) {
        dx = -DEFAULT_SPEED;
        dy = randSpeed(DEFAULT_SPEED);
    }

    if (pos.y < 0) {
        dx = randSpeed(DEFAULT_SPEED);
        dy = DEFAULT_SPEED;
    }

    if (pos.y > float(FRAMEY)) {
        dx = randSpeed(DEFAULT_SPEED);
        dy = -DEFAULT_SPEED;
    }

    objSprite.move(dx, dy);
}

// randomize and return a floating-point speed:
float randSpeed(int speedMod) {
    bool reverse = rand() % 2;
    float fSpeed = static_cast<float> (rand() % (DEFAULT_SPEED + speedMod));
    if (reverse) return fSpeed;
    else return fSpeed * (-1); 
}