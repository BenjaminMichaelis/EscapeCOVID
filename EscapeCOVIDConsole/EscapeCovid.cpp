//Escape Covid


int main() {

	//declare variables
	int score = 0;
	float dx = 0, dy = 0, speed = 5;
	dx = 0;
	dy = 0;

	srand(time(0));

	Texture t1, t2; //objects of type texture

	t1.loadFromFile("images/"".png"); //image for the viruses
	t2.loadFromFile("images/"".png"); //image for the person/player

	Sprite S1(t1);//virus sprite
	Sprite S2(t2); //player sprite

	//Create window
	sf::RenderWindow window(sf::VideoMode(300, 400), "EscapeCOVID SFML C++");
    window.setFramerateLimit(30);

    




	return 0;
}