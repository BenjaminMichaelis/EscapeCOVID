#ifndef VIRUSOBJ_H
#define VIRUSOBJ_H
#include "playerObj.h"
#include "rootheader.h"

class VirusOBJ : public PlayerOBJ {
  protected:
    PlayerOBJ *playerPos;
    float dx, dy;

  public:
    // constructor (virus must be created with reference to the player):
    VirusOBJ(PlayerOBJ &);
    
    // auto-movement for the virus:
    void autoMovement();

    // destructor:
    ~VirusOBJ() { delete this; }
};

// non-member function to randomize the speed:
float randSpeed(int speedMod);

#endif