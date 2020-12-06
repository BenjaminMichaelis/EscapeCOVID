#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/Graphics.hpp>
#include "rootheader.h"
#include "playerObj.h"
#include "virusObj.h"
#include "Score.h"
#include "Sound.h"
#include <string>

using namespace sf;

enum VirusCreation { FirstVirus, SecondVirus = 300, ThirdVirus = 600, FourthVirus = 900, FifthVirus = 1200 };


class Graphics
{
private:

    Event gameEvent;

    Score S1;//create score object
    Text text;
    Font font;
    SFX sound;


public:
    RenderWindow window;//build window
    PlayerOBJ player;

    VirusOBJ virus01;
    VirusOBJ virus02;
    VirusOBJ virus03;
    VirusOBJ virus04;
    VirusOBJ virus05;

    Graphics();//constructor loads textures and adds them to the sprites

    void createWindow();

    void closeWindow();
    void displayMovements(int VirusCreationTracker);

    bool checkCollision(int VirusCreationTracker);

    void reset();

};



#endif
