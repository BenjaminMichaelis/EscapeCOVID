#include "playerObj.h"
#include "rootheader.h"
#include "virusObj.h"

void gameInstance() {
    // create a new game Window:
    RenderWindow gameWindow(VideoMode(FRAME_WIDTH, FRAME_LENGTH),
                                "EscapeCOVID SFML C++");

    // set basic window aesthetics:
    gameWindow.clear(Color(127, 127, 127, 127));
    gameWindow.setFramerateLimit(60);

    // create new objects for player and virus,
    // all virus object at creation must be given a reference to the player.
    static PlayerOBJ player;

    
    VirusOBJ virus01(player);
    VirusOBJ virus02(player);

    // run the game while gameWindow stays open:
    while (gameWindow.isOpen()) {
        // terminate the game if window is closed:
        while (gameWindow.pollEvent(gameEvent)) {
            if (gameEvent.type == Event::Closed) {
                gameWindow.close();
            }
        }

        // main game loop, i.e. all movements and interactions go below this line:
        // player movement controls:
        if (Keyboard::isKeyPressed(Keyboard::Left)) {
            player.moveLeft();
        }
        if (Keyboard::isKeyPressed(Keyboard::Right)) {
            player.moveRight();
        }
        if (Keyboard::isKeyPressed(Keyboard::Up)) {
            player.moveUp();
        }
        if (Keyboard::isKeyPressed(Keyboard::Down)) {
            player.moveDown();
        }

        // virus auto-movement:
        virus01.autoMovement();
        virus02.autoMovement();
       

        // display movement changes:
        gameWindow.clear();
        
        gameWindow.draw(virus01.getSprite());
        gameWindow.draw(virus02.getSprite());

        gameWindow.draw(player.getSprite());

        gameWindow.display();
    }
}