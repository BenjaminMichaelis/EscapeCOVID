#include "Graphics.h"

Graphics::Graphics()
{
	virusTexture.loadFromFile("images/virus.png");//load virus texture
	playerTexture.loadFromFile("images/player.png");//load player texture

	virus.setTexture(virusTexture);//set texture to sprite
	player.setTexture(playerTexture);//set texture to sprite

	//POSITION OF SPRITES
	virus.setPosition(100, 100);

	//if window is 300x400, want to start player here

	player.setPosition(130, 39); //about the middle at the bottom
}

void Graphics::createWindow()//right now this function just opens a window, adds the sprites, and waits to be closed
{
	sf::RenderWindow window(sf::VideoMode(300, 300), "EscapeCOVID SFML C++");//build window

	window.clear(sf::Color(127, 127, 127, 127));//sets window color to grey, also clears window

	window.setFramerateLimit(30);//set framerate

	window.draw(virus);//draw virus

	window.draw(player);//draw player

	window.display();//display frame

	sf::Event event;//!!!this and the loops below will probably want to live in the function that runs the main game!!!

	while (window.isOpen())//
	{
		while (window.pollEvent(event))//this loop waits for the window to be closed
		{
			if (event.type == sf::Event::Closed)//if the event detected is close
			{
				window.close();//close the window
			}
		}
	}
}