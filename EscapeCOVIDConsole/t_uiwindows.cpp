#include "rootheader.h"

void testUI() {
    // declare UI variables: main frame && user sprite
    sf::RenderWindow gameWindow(sf::VideoMode(300, 500), "THIS IS A QUICK MOCKUP.");
    sf::CircleShape playerSprite(20.f);
    // set sprite's outline to black
    playerSprite.setOutlineColor(sf::Color::Black);

    // control loop to keep the window open while the game is being played.
    while (gameWindow.isOpen()) {
        sf::Event gameEvent;
        while (gameWindow.pollEvent(gameEvent)) {
            if (gameEvent.type == sf::Event::Closed)
                gameWindow.close();
        }

        // display sprite.
        gameWindow.clear();
        gameWindow.draw(playerSprite);
        gameWindow.display();
    }

    return;
}