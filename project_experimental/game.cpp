#include "playerObj.h"
#include "rootheader.h"
#include "virusObj.h"

void gameInstance() {
    // create a new game Window:
    sf::RenderWindow gameWindow(sf::VideoMode(FRAME_WIDTH, FRAME_LENGTH),
                                "EscapeCOVID SFML C++");

    // set basic window aesthetics:
    gameWindow.clear(sf::Color(127, 127, 127, 127));
    gameWindow.setFramerateLimit(30);

    // create new objects for player and virus,
    // all virus object at creation must be given a reference to the player.
    PlayerOBJ player;
    VirusOBJ virus(player);

    // start a game event
    sf::Event gameEvent;

    sf::Vector2f playerPos, virusPos;

    // run the game while gameWindow stays open:
    while (gameWindow.isOpen()) {
        // terminate the game if window is closed:
        while (gameWindow.pollEvent(gameEvent)) {
            if (gameEvent.type == sf::Event::Closed) {
                gameWindow.close();
            }
        }

        // main game loop, i.e. all movements and interactions go below this line:
        // player movement controls:
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            player.moveLeft();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            player.moveRight();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            player.moveUp();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            player.moveDown();
        }

        // virus auto-movement:
        virus.movement();

        // display movement changes:
        gameWindow.clear();
        gameWindow.draw(virus.getSprite());
        gameWindow.draw(player.getSprite());
        gameWindow.display();
    }
}