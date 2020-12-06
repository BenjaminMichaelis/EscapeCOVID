#include "Score.h"

Score::Score()
{
	score = clock(); //grab current time as basis for score
}

int Score::updateScore() //every time this function is called, update score
{
	int timer = (clock() - score) / 100000; //score is equal to current time minus starting time divided by 1000 to give seconds

	return timer; //return time
}

void Score::resetScore()
{
	score = clock();
}