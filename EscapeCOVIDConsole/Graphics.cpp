#include "Graphics.h"



Graphics::Graphics()
{
    virusTexture.loadFromFile("images/virus.png");//load virus texture
    playerTexture.loadFromFile("images/player.png");//load player texture

    virus.setTexture(virusTexture);//set texture to sprite
    player.setTexture(playerTexture);//set texture to sprite

    //POSITION OF SPRITES
    virus.setPosition(100, 100);

    //if window is 300x300, want to start player here

    player.setPosition(130, 39); //about the middle at the bottom
}

void Graphics::createWindow()//right now this function just opens a window, adds the sprites, and waits to be closed
{
    window.create(VideoMode(FRAME_WIDTH, FRAME_LENGTH),
        "EscapeCOVID SFML C++");

    window.clear(Color(127, 127, 127, 127));//sets window color to grey, also clears window

    window.setFramerateLimit(30);//set framerate

    window.draw(virus);//draw virus

    window.draw(player);//draw player

    window.display();//display frame

}

void Graphics::closeWindow()
{
    // run the game while window stays open:
    while (window.isOpen()) {
        // terminate the game if window is closed:
        while (window.pollEvent(gameEvent)) {
            if (gameEvent.type == Event::Closed) {
                window.close();
            }
        }
}