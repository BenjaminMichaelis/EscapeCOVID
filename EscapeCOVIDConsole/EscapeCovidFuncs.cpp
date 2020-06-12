
#include <SFML/Graphics.hpp>
#include <time.h>

using namespace sf;

//NEEDS WORK STILL

//Function for the shapes (virus's and player)
void shapes() {

	Texture t1;
	Texture t2;

//SHAPE
	//circle shapes for the virus, 
	t1.loadFromFile("images/blue.png", sf::CircleShape virus(5.f));
	//virus.setFillColor(sf::Color::White); //dont need for ref if need
	
	//rectangle shape for the player
	t2.loadFromFile("images/red.png", sf::IntRect(sf::Vector2f(10,20))); //40 long, 10 wide
	//player.setFillColor(sf::Color::White); //dont need for ref if need
	
//CREATING THE SPRITE
	Sprite virus(t1);//virus sprite
	Sprite player(t2); //player sprite

//POSITION OF SPRITES
	virus.setPosition(100,100);
	//if window is 300x400, want to start player here
	player.setPosition(130, 39); //about the middle at the bottom

	//we can can change the file name obviously but yeah

}