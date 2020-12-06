#ifndef SCORE_H
#define SCORE_H

#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>

class Score
{
    private:
        clock_t score;//score is a time

    public:

        Score();//score constructor

        int updateScore();//update score

        void resetScore();//reset score on death
};


#endif