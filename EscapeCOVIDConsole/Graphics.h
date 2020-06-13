#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>

class Graphics
{
private:
	sf::Texture virusTexture;//initialize virus texture
	sf::Texture playerTexture;//initialize player texture

	sf::Sprite virus;//initialize virus sprite
	sf::Sprite player;//initialize player sprite

	sf::RenderWindow window;//build window

public:

	Graphics();//constructor loads textures and adds them to the sprites

	void createWindow();

};



#endif
