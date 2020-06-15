#include "Graphics.h"
#include "Score.h"



Graphics::Graphics()
{
    virus01.CreateVirusOBJ(player);
    virus02.CreateVirusOBJ(player);
    font.loadFromFile("Tuffy.ttf");
}

void Graphics::createWindow()//right now this function just opens a window, adds the sprites, and waits to be closed
{
    window.create(VideoMode(FRAME_WIDTH, FRAME_LENGTH),
        "EscapeCOVID SFML C++");
    text.setFont(font);
    window.clear(Color(127, 127, 127, 127));//sets window color to grey, also clears window
    text.setFillColor(sf::Color::White);//set text color
    window.setFramerateLimit(60);//set framerate

    window.display();//display frame
}

void Graphics::displayMovements()
{
    // display movement changes:
    window.clear(Color(127, 127, 127, 127));

    window.draw(virus01.getSprite());
    window.draw(virus02.getSprite());

    window.draw(player.getSprite());

    text.setString(std::to_string(S1.updateScore()));//set score text to current score
    window.draw(text);//draw score
    
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