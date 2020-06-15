#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>
#include "rootheader.h"
#include "playerObj.h"
#include "virusObj.h"

using namespace sf;

class Graphics
{
private:

    Event gameEvent;


public:
    RenderWindow window;//build window
    PlayerOBJ player;

    VirusOBJ virus01;
    VirusOBJ virus02;

    Graphics();//constructor loads textures and adds them to the sprites

    void createWindow();

    void closeWindow();
    void displayMovements();

};



#endif
