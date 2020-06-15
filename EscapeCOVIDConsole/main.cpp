// **************************************************************************************************************
// PROJECT: GRAPHICS."ESCAPE_COVID" 
// TEAM: BENJAMIN MICHAELIS, JARED CAMPBELL, KARL NORDEN, TEDDIE HOVANEC
// Main execution file:
// **************************************************************************************************************
#include "rootheader.h"
#include "Graphics.h"
#include "../project_experimental/playerObj.h"
#include "../project_experimental/virusObj.h"
#include <iostream>


int main() 
{
    //declare variables
    int score = 0;
    float dx = 0, dy = 0, speed = 5;
    dx = 0;
    dy = 0;

    srand(time(NULL));


    gameInstance();
    /*Graphics W1;
    W1.createWindow();*/


    return 0;
}