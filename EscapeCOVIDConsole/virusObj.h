#ifndef VIRUSOBJ_H
#define VIRUSOBJ_H
#include "playerObj.h"
#include "rootheader.h"

class VirusOBJ : public PlayerOBJ {
  protected:
    sf::Vector2f playerPos;

  public:
    // constructor (virus must be created with reference to the player):
    VirusOBJ();
    VirusOBJ(PlayerOBJ &);

    void CreateVirusOBJ(PlayerOBJ& player);

    // auto-movement for the virus:
    void autoMovement();

    // destructor:
    //~VirusOBJ() { delete this; }
};

// non-member function to randomize the speed:
float randSpeed(int speedMod);

#endif