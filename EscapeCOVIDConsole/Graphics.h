#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>
#include "rootheader.h"
#include "../project_experimental/playerObj.h"
#include "../project_experimental/virusObj.h"

using namespace sf;

class Graphics
{
private:
    RenderWindow window;//build window

    Event gameEvent;//!!!this and the loops below will probably want to live in the function that runs the main game!!!


public:
    static PlayerOBJ player;

    VirusOBJ virus01;
    VirusOBJ virus02;

    Graphics();//constructor loads textures and adds them to the sprites

    void createWindow();

    void closeWindow();
    void displayMovements();

};



#endif
