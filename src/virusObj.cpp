#include "virusObj.h"

// virus default constructor:
VirusOBJ::VirusOBJ()
{
	objTexture.loadFromFile("content/images/virus.png");
	objSprite.setTexture(objTexture);
	playerPos.x = PLAYER_DEFAULT_X;
	playerPos.y = PLAYER_DEFAULT_Y;
	objSprite.setPosition(playerPos);
}

// virus constructor:
VirusOBJ::VirusOBJ(PlayerOBJ& player)
{
	// load up virus's texture
	objTexture.loadFromFile("content/images/virus.png");
	objSprite.setTexture(objTexture);
	objSprite.setPosition(PLAYER_DEFAULT_X, PLAYER_DEFAULT_Y);

	// get the initial position:
	playerPos = player.getSprite().getPosition();
	int x, y;
	while (getSprite().getPosition() == playerPos)
	{
		x = rand() % FRAME_WIDTH;
		y = rand() % FRAME_LENGTH;

		objSprite.setPosition(float(x), float(y));
	}

	dx = dy = DEFAULT_SPEED;
	objSprite.move(dx, dy);
}

void VirusOBJ::CreateVirusOBJ(PlayerOBJ& player)
{
	// load up virus's texture
	objTexture.loadFromFile("content/images/virus.png");
	objSprite.setTexture(objTexture);
	objSprite.setPosition(PLAYER_DEFAULT_X, PLAYER_DEFAULT_Y);

	// get the initial position:
	playerPos = player.getSprite().getPosition();
	int x, y;
	while (getSprite().getPosition() == playerPos)
	{
		x = rand() % FRAME_WIDTH;
		y = rand() % FRAME_LENGTH;

		objSprite.setPosition(float(x), float(y));
	}

	dx = dy = DEFAULT_SPEED;
	objSprite.move(dx, dy);
}

// auto-movement for the virus:
void VirusOBJ::autoMovement()
{
	// get virus position:
	pos = objSprite.getPosition();

	// set map limits:
	static int FRAMEX = FRAME_WIDTH - VIRUS_SIZE;
	static int FRAMEY = FRAME_LENGTH - VIRUS_SIZE;

	// bounce-back behaviors when hitting walls for the virus object:
	if (pos.x < 0)
	{
		sound.wallHit(); //play virus wall collide sound
		dx = DEFAULT_SPEED;
		dy = randSpeed(DEFAULT_SPEED);
	}

	if (pos.x > float(FRAMEX))
	{
		sound.wallHit(); //play virus wall collide sound
		dx = -DEFAULT_SPEED;
		dy = randSpeed(DEFAULT_SPEED);
	}

	if (pos.y < 0)
	{
		sound.wallHit(); //play virus wall collide sound
		dx = randSpeed(DEFAULT_SPEED);
		dy = DEFAULT_SPEED;
	}

	if (pos.y > float(FRAMEY))
	{
		sound.wallHit(); //play virus wall collide sound
		dx = randSpeed(DEFAULT_SPEED);
		dy = -DEFAULT_SPEED;
	}

	objSprite.move(dx, dy);
}

// randomize and return a floating-point speed:
float randSpeed(int speedMod)
{
	bool reverse = rand() % 2;
	float fSpeed = static_cast<float>(rand() % (DEFAULT_SPEED + speedMod));
	if (reverse)
		return fSpeed;
	else
		return fSpeed * (-1);
}