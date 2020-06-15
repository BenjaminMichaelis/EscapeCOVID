#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/Graphics.hpp>
#include "rootheader.h"
#include "playerObj.h"
#include "virusObj.h"
#include <string>

using namespace sf;

class Graphics
{
private:

    Event gameEvent;


	sf::Font font;

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
