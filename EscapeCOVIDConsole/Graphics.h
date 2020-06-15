#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/Graphics.hpp>
#include <string>

class Graphics
{
private:
	sf::Texture virusTexture;//initialize virus texture
	sf::Texture playerTexture;//initialize player texture

	sf::Sprite virus;//initialize virus sprite
	sf::Sprite player;//initialize player sprite

	sf::RenderWindow window;//build window

	sf::Font font;

public:

	Graphics();//constructor loads textures and adds them to the sprites

	void createWindow();

};



#endif
