#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>
#include "rootheader.h"

using namespace sf;

class Graphics
{
private:
    Texture virusTexture;//initialize virus texture
    Texture playerTexture;//initialize player texture

    Sprite virus;//initialize virus sprite
    Sprite player;//initialize player sprite

    RenderWindow window;//build window

    Event gameEvent;//!!!this and the loops below will probably want to live in the function that runs the main game!!!


public:

    Graphics();//constructor loads textures and adds them to the sprites

    void createWindow();

    void closeWindow();

};



#endif
