#include "Window.h"
#include "Sprites.h"



Graphics::Graphics()
{
	virusTexture.loadFromFile("images/virus.png");//load virus texture
	playerTexture.loadFromFile("images/player.png");//load player texture

	//sf::Sprite virus(virusTexture);//build virus sprite

	virus.setTexture(virusTexture);

	//sf::Sprite player(playerTexture); //build player sprite

	player.setTexture(playerTexture);

	//POSITION OF SPRITES
	virus.setPosition(100, 100);

	//if window is 300x400, want to start player here

	player.setPosition(130, 39); //about the middle at the bottom
}

void Graphics::createWindow()//right now this function just opens a window and waits for it to be closed
{
	sf::RenderWindow window(sf::VideoMode(300, 300), "EscapeCOVID SFML C++");

	window.setFramerateLimit(30);

	window.draw(virus);

	window.draw(player);

	window.display();

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