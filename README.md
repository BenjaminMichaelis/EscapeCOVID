# EscapeCOVID

![C/C++ CI](https://github.com/BenjaminMichaelis/EscapeCOVID/workflows/C/C++%20CI/badge.svg?branch=master)
<p align="left" >
        <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/contributors/BenjaminMichaelis/EscapeCovid" alt="Number of Contributors" />
    </a>
    <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/stars/BenjaminMichaelis/EscapeCOVID" alt="Number Of Stars" />
    </a>
        <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/languages/code-size/BenjaminMichaelis/EscapeCOVID" alt="Code Size" />
    </a>
    <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/forks/BenjaminMichaelis/EscapeCOVID" alt="Number of Forks" />
    </a>
        <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/license/BenjaminMichaelis/EscapeCOVID" alt="License" />
    </a>
    
Link to GitHub Repo: https://github.com/BenjaminMichaelis/EscapeCOVID

CPTS122-01

Benjamin Michaelis<br />
Jared Campbell<br />
Teddie Hovanec<br />
Karl Norden<br />

# Gameplay Demo Instructions:
Compile and run the program. The game starts out with one virus and one by one up to 5 viruses will be spawned.

# Control instructions:
- Use the ARROW keys to control the Player that spawns in the middle of the screen.<br />
- Control the Player to avoid the viruses for as long as you can.
- Hit the ENTER key to reset the game if you are hit by a virus.
- To end the game, simply close the game window.

# The following critera are tested successfully in the Demo:
1. Player successfully collides with and is stopped by four walls.
2. All 5 Viruses spawn successfully at random locations without colliding with the player initially upon creation.
3. All 5 Viruses successfully collides with the walls and subsequently change their trajectory.
4. All 5 Viruses successfully collide with the Player and subsequently stop/pause the game.
5. The Elapsed Time Counter successfully resets at each Player-Virus collision.
6. Successful implementation of the Sound Effects.
7. Exiting out the game window successfully shuts down the game.
