#include "Graphics.h"
#include "Score.h"

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

	font.loadFromFile("Tuffy.ttf");

}

void Graphics::createWindow()//right now this function just opens a window, adds the sprites, and waits to be closed
{
	sf::RenderWindow window(sf::VideoMode(300, 300), "EscapeCOVID SFML C++");//build window

	window.setFramerateLimit(30);//set framerate

	sf::Event event;//!!!this and the loops below will probably want to live in the function that runs the main game!!!

	sf::Text text("", font);//initialize clock text for window

	text.setFillColor(sf::Color::White);//set text color

	Score S1;//create score object

	while (window.isOpen())//while window is open
	{
		while (window.pollEvent(event))//this loop waits for the window to be closed
		{
			if (event.type == sf::Event::Closed)//if the event detected is close
			{
				window.close();//close the window
			}
		}

		text.setString(std::to_string(S1.updateScore()));//set score text to current score

		window.clear(sf::Color(127, 127, 127, 127));//sets window color to grey, also clears window

		window.draw(text);//draw store

		window.draw(virus);//draw virus

		window.draw(player);//draw player

		window.display();//display frame
	}
}