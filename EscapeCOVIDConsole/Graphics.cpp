#include "Graphics.h"
#include "Score.h"

Graphics::Graphics()
{
    font.loadFromFile("Tuffy.ttf");
}

void Graphics::createWindow()//right now this function just opens a window, adds the sprites, and waits to be closed
{
    window.create(VideoMode(FRAME_WIDTH, FRAME_LENGTH),
        "EscapeCOVID SFML C++");
    text.setFont(font);
    window.clear(Color(COLORRED, COLORGREEN, COLORBLUE, COLORALPHA));//sets window color to grey, also clears window
    text.setFillColor(sf::Color::White);//set text color
    window.setFramerateLimit(60);//set framerate

    window.display();//display frame
}

void Graphics::displayMovements(int VirusCreationTracker)
{
    // display movement changes:
    window.clear(Color(COLORRED, COLORGREEN, COLORBLUE, COLORALPHA));

    if (VirusCreationTracker >= FirstVirus)
    {
        window.draw(virus01.getSprite());
    }
    if (VirusCreationTracker >= SecondVirus)
    {
        window.draw(virus02.getSprite());
    }
    if (VirusCreationTracker >= ThirdVirus)
    {
        window.draw(virus03.getSprite());
    }
    if (VirusCreationTracker >= FourthVirus)
    {
        window.draw(virus04.getSprite());
    }
    if (VirusCreationTracker >= FifthVirus)
    {
        window.draw(virus05.getSprite());
    }

    window.draw(player.getSprite());

    text.setString(std::to_string(S1.updateScore()));//set score text to current score
    window.draw(text);//draw score
    
    window.display();
}

bool Graphics::checkCollision(int VirusCreationTracker)
{
    int virusX1;

    int virusX2;

    int virusY1;

    int virusY2;

    int playerX1;

    int playerX2;

    int playerY1;

    int playerY2;

    playerX1 = player.getSprite().getPosition().x;//player left side

    playerX2 = player.getSprite().getPosition().x + PLAYER_W;//player right side

    playerY1 = player.getSprite().getPosition().y;//player top side

    playerY2 = player.getSprite().getPosition().y - PLAYER_H;//player bottom side

 
    if (VirusCreationTracker >= FirstVirus)
    {
        virusX1 = virus01.getSprite().getPosition().x;//left side of virus

        virusX2 = virus01.getSprite().getPosition().x + VIRUS_SIZE;//right side of virus

        virusY1 = virus01.getSprite().getPosition().y;//top of virus

        virusY2 = virus01.getSprite().getPosition().y - VIRUS_SIZE;//bottom of virus

        if ((virusX1 >= playerX1 && virusX1 <= playerX2) || (virusX2 <= playerX1 && virusX2 >= playerX2))//if either side of virus overlaps either side of player
        {
            if ((virusY1 <= playerY1 && virusY1 >= playerY2) || (virusY2 <= playerY1 && virusY2 >= playerY2))//if top or bottom of virus overlaps top or bottom of player
            {
                sound.playerHit();//play player death sound
                return true;//collision detected
            }
        }
    }
    if (VirusCreationTracker >= SecondVirus)
    {
        virusX1 = virus02.getSprite().getPosition().x;//left side of virus

        virusX2 = virus02.getSprite().getPosition().x + VIRUS_SIZE;//right side of virus

        virusY1 = virus02.getSprite().getPosition().y;//top of virus

        virusY2 = virus02.getSprite().getPosition().y - VIRUS_SIZE;//bottom of virus

        if ((virusX1 >= playerX1 && virusX1 <= playerX2) || (virusX2 <= playerX1 && virusX2 >= playerX2))//if either side of virus overlaps either side of player
        {
            if ((virusY1 <= playerY1 && virusY1 >= playerY2) || (virusY2 <= playerY1 && virusY2 >= playerY2))//if top or bottom of virus overlaps top or bottom of player
            {
                sound.playerHit();//play player death sound
                return true;//collision detected
            }
        }
    }
    if (VirusCreationTracker >= ThirdVirus)
    {
        virusX1 = virus03.getSprite().getPosition().x;//left side of virus

        virusX2 = virus03.getSprite().getPosition().x + VIRUS_SIZE;//right side of virus

        virusY1 = virus03.getSprite().getPosition().y;//top of virus

        virusY2 = virus03.getSprite().getPosition().y - VIRUS_SIZE;//bottom of virus

        if ((virusX1 >= playerX1 && virusX1 <= playerX2) || (virusX2 <= playerX1 && virusX2 >= playerX2))//if either side of virus overlaps either side of player
        {
            if ((virusY1 <= playerY1 && virusY1 >= playerY2) || (virusY2 <= playerY1 && virusY2 >= playerY2))//if top or bottom of virus overlaps top or bottom of player
            {
                sound.playerHit();//play player death sound
                return true;//collision detected
            }
        }
    }
    if (VirusCreationTracker >= FourthVirus)
    {
        virusX1 = virus04.getSprite().getPosition().x;//left side of virus

        virusX2 = virus04.getSprite().getPosition().x + VIRUS_SIZE;//right side of virus

        virusY1 = virus04.getSprite().getPosition().y;//top of virus

        virusY2 = virus04.getSprite().getPosition().y - VIRUS_SIZE;//bottom of virus

        if ((virusX1 >= playerX1 && virusX1 <= playerX2) || (virusX2 <= playerX1 && virusX2 >= playerX2))//if either side of virus overlaps either side of player
        {
            if ((virusY1 <= playerY1 && virusY1 >= playerY2) || (virusY2 <= playerY1 && virusY2 >= playerY2))//if top or bottom of virus overlaps top or bottom of player
            {
                sound.playerHit();//play player death sound
                return true;//collision detected
            }
        }
    }
    if (VirusCreationTracker >= FifthVirus)
    {
        virusX1 = virus05.getSprite().getPosition().x;//left side of virus

        virusX2 = virus05.getSprite().getPosition().x + VIRUS_SIZE;//right side of virus

        virusY1 = virus05.getSprite().getPosition().y;//top of virus

        virusY2 = virus05.getSprite().getPosition().y - VIRUS_SIZE;//bottom of virus

        if ((virusX1 >= playerX1 && virusX1 <= playerX2) || (virusX2 <= playerX1 && virusX2 >= playerX2))//if either side of virus overlaps either side of player
        {
            if ((virusY1 <= playerY1 && virusY1 >= playerY2) || (virusY2 <= playerY1 && virusY2 >= playerY2))//if top or bottom of virus overlaps top or bottom of player
            {
                sound.playerHit();//play player death sound
                return true;//collision detected
            }
        }
    }

    return false;
}

void Graphics::closeWindow()
{
        // terminate the game if window is closed:
        while (window.pollEvent(gameEvent)) 
        {
            if (gameEvent.type == Event::Closed) 
            {
                window.close();
            }
        }
}

void Graphics::reset()
{
    S1.resetScore();
}