// **************************************************************************************************************
// PROJECT: GRAPHICS."ESCAPE_COVID" 
// TEAM: BENJAMIN MICHAELIS, JARED CAMPBELL, KARL NORDEN, TEDDIE HOVANNEC
// Main execution file:
// **************************************************************************************************************
#include "rootheader.h"
//#include "Graphics.h"
#include <iostream>
#include "playerObj.h"
#include "virusObj.h"

int main() 
{
	srand(static_cast<unsigned int>(time(NULL)));

	// execute a game's instance:
	gameInstance();
	
    return 0;
}