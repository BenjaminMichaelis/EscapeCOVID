#include "playerObj.h"
#include "rootheader.h"
#include "virusObj.h"
#include "Graphics.h"

enum VirusCreation {FirstVirus, SecondVirus = 300, ThirdVirus = 600, FourthVirus = 900, FifthVirus = 1200};

void gameInstance() {
        Graphics Window;
        Window.createWindow();
        int VirusCreationTracker = 0;
        Vector2f playerPos, virusPos;
        // run the game while window stays open:
        while (Window.window.isOpen())
        {
            if (VirusCreationTracker == FirstVirus)
            {
                Window.virus01.CreateVirusOBJ(Window.player);
            }
            if (VirusCreationTracker == SecondVirus)
            {
                Window.virus02.CreateVirusOBJ(Window.player);
            }
            Window.player.getSprite().getPosition().x;
            Window.virus01.getSprite().getPosition().x;


            Window.closeWindow();
            // main game loop, i.e. all movements and interactions go below this line:
            // player movement controls:
            if (Keyboard::isKeyPressed(Keyboard::Left)) {
                Window.player.moveLeft();
            }
            if (Keyboard::isKeyPressed(Keyboard::Right)) {
                Window.player.moveRight();
            }
            if (Keyboard::isKeyPressed(Keyboard::Up)) {
                Window.player.moveUp();
            }
            if (Keyboard::isKeyPressed(Keyboard::Down)) {
                Window.player.moveDown();
            }

            // virus auto-movement:
            Window.virus01.autoMovement();
            Window.virus02.autoMovement();


            Window.displayMovements();
            VirusCreationTracker++;
        }
}