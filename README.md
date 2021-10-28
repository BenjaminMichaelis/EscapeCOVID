# EscapeCOVID
A simple C++ and SFML based player escape from virus object game

[**Play On Itch.io!**](https://benjaminmichaelis.itch.io/escapecovid)
<br>
<br>
[![Ubuntu Bash Build](https://github.com/BenjaminMichaelis/EscapeCOVID/actions/workflows/UbuntuBashBuild.yml/badge.svg?branch=master)](https://github.com/BenjaminMichaelis/EscapeCOVID/actions/workflows/UbuntuBashBuild.yml)
[![Ubuntu Make Build](https://github.com/BenjaminMichaelis/EscapeCOVID/actions/workflows/UbuntuMakeBuild.yml/badge.svg?branch=master)](https://github.com/BenjaminMichaelis/EscapeCOVID/actions/workflows/UbuntuMakeBuild.yml)
    <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/stars/BenjaminMichaelis/EscapeCOVID" alt="Number Of Stars" />
    </a>
<p align="left" >
 <!--       <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/contributors/BenjaminMichaelis/EscapeCovid" alt="Number of Contributors" />
    </a> -->
 <!--         <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/languages/code-size/BenjaminMichaelis/EscapeCOVID" alt="Code Size" />
    </a>
    <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/forks/BenjaminMichaelis/EscapeCOVID" alt="Number of Forks" />
    </a>
        <a href="https://github.com/benjaminmichaelis/EscapeCOVID">
        <img src="https://img.shields.io/github/license/BenjaminMichaelis/EscapeCOVID" alt="License" />
    </a>
--> 
        
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

        
## Build Without VS Code (experimental)

If you have a reason to build your project without Code (on Raspbian or something), you can run build.sh the following way:

1. Use any bash terminal (Git Bash if Windows).
2. Run a variation of the following:

```
bash build.sh (build|buildrun|rebuild|run|buildprod|profile) (Debug|Release) (executable commmand line options)
```

For instance, to build & run the Release build, you'd use:

```
bash build.sh buildrun Release
```

If you run the script without any parameters, it's the same as the following:

```
bash build.sh buildprod Release
```

To build & run the unit tests, use:

```
bash build.sh buildrun Tests vscode '-w NoTests -s'
```

(The last parameter contains Catch2 command line options)

If the build mode is not Debug or Release, it will default to Release. If you need to, change the "Path" variables within the build.sh file in the "if [[$VSCODE != 'vscode']] ; then" block.
