#ifndef SOUND_H
#define SOUND_H

#include <SFML/Audio.hpp>

using namespace sf;

class SFX
{
private:
	SoundBuffer playerDie;
	Sound gameOver;

	SoundBuffer wallCollide;
	Sound collide;

public:

	SFX();

	void playerHit();

	void wallHit();

};


#endif
