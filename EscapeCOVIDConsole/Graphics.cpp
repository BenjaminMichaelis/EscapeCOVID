#include "Graphics.h"
#include "Score.h"



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

	player.setPosition(130, 39); //about the middle at the bottom
    window.display();//display frame
	font.loadFromFile("Tuffy.ttf");
}

void Graphics::displayMovements()
{
    // display movement changes:
    window.clear(Color(127, 127, 127, 127));

    window.draw(virus01.getSprite());
    window.draw(virus02.getSprite());

    window.draw(player.getSprite());

    window.display();
}

	sf::Text text("", font);//initialize clock text for window
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
	text.setFillColor(sf::Color::White);//set text color
	Score S1;//create score object
		text.setString(std::to_string(S1.updateScore()));//set score text to current score
		window.draw(text);//draw store
}