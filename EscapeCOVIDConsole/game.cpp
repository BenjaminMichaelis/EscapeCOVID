#include "playerObj.h"
#include "rootheader.h"
#include "virusObj.h"
#include "Graphics.h"


void gameInstance() {
        Graphics Window;
        Window.createWindow();
        int VirusCreationTracker = 0;
        Vector2f playerPos, virusPos;
        bool collision = false;
        // run the game while window stays open:
        while (Window.window.isOpen() && collision == false)
        {
            collision = Window.checkCollision(VirusCreationTracker);

            if (VirusCreationTracker == FirstVirus)
            {
                Window.virus01.CreateVirusOBJ(Window.player);
            }
            if (VirusCreationTracker == SecondVirus)
            {
                Window.virus02.CreateVirusOBJ(Window.player);
            }
            if (VirusCreationTracker == ThirdVirus)
            {
                Window.virus03.CreateVirusOBJ(Window.player);
            }
            if (VirusCreationTracker == FourthVirus)
            {
                Window.virus04.CreateVirusOBJ(Window.player);
            }
            if (VirusCreationTracker == FifthVirus)
            {
                Window.virus05.CreateVirusOBJ(Window.player);
            }
            //Window.player.getSprite().getPosition().x;
            //Window.virus01.getSprite().getPosition().x;


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
            if (VirusCreationTracker >= FirstVirus)
            {
                Window.virus01.autoMovement();
            }
            if (VirusCreationTracker >= SecondVirus)
            {
                Window.virus02.autoMovement();
            }
            if (VirusCreationTracker >= ThirdVirus)
            {
                Window.virus03.autoMovement();
            }
            if (VirusCreationTracker >= FourthVirus)
            {
                Window.virus04.autoMovement();
            }
            if (VirusCreationTracker >= FifthVirus)
            {
                Window.virus05.autoMovement();
            }
         

            Window.displayMovements(VirusCreationTracker);
            VirusCreationTracker++;
        }
}

