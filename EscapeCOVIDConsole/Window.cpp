#include "Window.h"
#include "Sprites.h"

void createWindow()//right now this function just opens a window and waits for it to be closed
{
	sf::RenderWindow window(sf::VideoMode(300, 300), "EscapeCOVID SFML C++");

	window.setFramerateLimit(30);

	

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