
#OBJS specifies which files to compile as part of the project
OBJS = src\main.cpp src\CommonFunction.cpp src\Font.cpp src\gBackground.cpp src\gCharacter.cpp src\gExitMenu.cpp src\GIngameMenu.cpp src\gIntroduceMenu.cpp src\gLoseMenu.cpp src\gOptionsMenu.cpp src\gPauseMenu.cpp src\gStartMenu.cpp src\LButton.cpp src\LCountDown.cpp src\LScore.cpp src\Lsound.cpp src\LTexture.cpp src\LTimer.cpp src\ObstacleAndItem.cpp src\ObstacleAndItemProperties.cpp

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = main

#This is the target that compiles our executable
all : $(OBJS)
	g++ $(OBJS) -IC:\Users\a\Documents\lazyfoo\SDL2-2.26.3\i686-w64-mingw32\include\SDL2 -LC:\Users\a\Documents\lazyfoo\SDL2-2.26.3\i686-w64-mingw32\lib -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf -o $(OBJ_NAME)


