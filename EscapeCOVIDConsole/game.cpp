#include "playerObj.h"
#include "rootheader.h"
#include "virusObj.h"
#include "Graphics.h"

void gameInstance() {
        Graphics W1;
        W1.createWindow();

        Vector2f playerPos, virusPos;
        // run the game while window stays open:
        while (W1.window.isOpen())
        {
            W1.closeWindow();
            // main game loop, i.e. all movements and interactions go below this line:
            // player movement controls:
            if (Keyboard::isKeyPressed(Keyboard::Left)) {
                W1.player.moveLeft();
            }
            if (Keyboard::isKeyPressed(Keyboard::Right)) {
                W1.player.moveRight();
            }
            if (Keyboard::isKeyPressed(Keyboard::Up)) {
                W1.player.moveUp();
            }
            if (Keyboard::isKeyPressed(Keyboard::Down)) {
                W1.player.moveDown();
            }

            // virus auto-movement:
            W1.virus01.autoMovement();
            W1.virus02.autoMovement();


            W1.displayMovements();
        }
}