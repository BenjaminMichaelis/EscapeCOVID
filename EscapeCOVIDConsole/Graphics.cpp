#include "Graphics.h"



Graphics::Graphics()
{
    virus01.CreateVirusOBJ(player);
    virus02.CreateVirusOBJ(player);
}

void Graphics::createWindow()//right now this function just opens a window, adds the sprites, and waits to be closed
{
    window.create(VideoMode(FRAME_WIDTH, FRAME_LENGTH),
        "EscapeCOVID SFML C++");

    window.clear(Color(127, 127, 127, 127));//sets window color to grey, also clears window

    window.setFramerateLimit(60);//set framerate

    //window.draw(virus);//draw virus

    //window.draw(player);//draw player

    window.display();//display frame

}

void Graphics::displayMovements()
{
    // display movement changes:
    window.clear();

    window.draw(virus01.getSprite());
    window.draw(virus02.getSprite());

    window.draw(player.getSprite());

    window.display();
}

void Graphics::closeWindow()
{

        // terminate the game if window is closed:
        while (window.pollEvent(gameEvent)) 
        {
            if (gameEvent.type == Event::Closed) 
            {
                window.close();
            }
        }
}