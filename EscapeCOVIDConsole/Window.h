#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>

class Graphics
{
private:
	sf::Texture virusTexture;
	sf::Texture playerTexture;

	sf::Sprite virus;
	sf::Sprite player;

public:

	Graphics();

	void createWindow();

};



#endif
