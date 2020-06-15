#ifndef PLAYEROBJ_H
#define PLAYEROBJ_H
#include "rootheader.h"

class PlayerOBJ {
  protected:
    sf::Texture objTexture;
    sf::Sprite objSprite;
    float dx, dy;
    sf::Vector2f pos;

  public:
    // constructor:
    PlayerOBJ();
    // return the loaded Sprite asset:
    sf::Sprite getSprite();

    // player-controlled movements:
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();

    // destructor:
    ~PlayerOBJ() { delete this; }
};

#endif