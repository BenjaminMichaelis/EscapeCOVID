#include "Sprites.h"

//using namespace sf;

//NEEDS WORK STILL

//Function for the shapes (virus's and player)
void shapes() 

{

	sf::Texture t1;
	sf::Texture t2;

//SHAPE
	//circle shapes for the virus, 
	//t1.loadFromFile("images/virus.png", sf::CircleShape virus(5.f));

	t1.loadFromFile("images/virus.png");

	//virus.setFillColor(sf::Color::White); //dont need for ref if need
	
	//rectangle shape for the player
	//t2.loadFromFile("images/player.png", sf::IntRect(sf::Vector2f(10,20))); //40 long, 10 wide

	t2.loadFromFile("images/player.png");

	//player.setFillColor(sf::Color::White); //dont need for ref if need
	
//CREATING THE SPRITE
	sf::Sprite virus(t1);//virus sprite
	sf::Sprite player(t2); //player sprite

//POSITION OF SPRITES
	virus.setPosition(100,100);

	//if window is 300x400, want to start player here

	player.setPosition(130, 39); //about the middle at the bottom

	//we can can change the file name obviously but yeah

}