#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <string>
#include <vector>
#include <SDL_ttf.h>
#include <sstream>
#include <math.h>
#include "LTimer.h"
#include "LTexture.h"
#include "LSound.h"
#include "LScore.h"
//Screen dimension
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

const int GROUND = SCREEN_HEIGHT - 70;
const int JUMP_MAX = 250;
const double GRAVITY = 120;
//Game loop status
static bool quit = false;

//speed render
static int speedRender = 0;
static int speedRenderSaved = 0;
static int saved_speedRender = 10;

//Character clip size
const int numberOfrunClips = 3;
const int numberOfjumpClips = 1;
const int numberOffallClips = 1;
const int numberOffastlandingClips = 1;

//Threshold controller
static const int THRESHOLD_CONTROLER_LEFT = 570;
static const int THRESHOLD_CONTROLER_RIGHT = 850;

enum TO_DO {
    TO_DO_START,
    TO_DO_BACK,
    TO_DO_RESUME,
    TO_DO_RESTART,
    TO_DO_PAUSE,
    TO_DO_EXIT_MENU,
    TO_DO_EXIT,
    TO_DO_OPTIONS,
    TO_DO_SET_VOL_BGM,
    TO_DO_SET_VOL_SFX,
    TO_DO_TURN_OFF_SOUND,
    TO_DO_TURN_ON_SOUND,
    TO_DO_BACK_HOME,
    TO_DO_COUNTDOWN,
    TO_DO_INTRODUCE
};
enum ONOFFSTAR {
    OFF_STAR = 0,
    ON_STAR = 1,
    ONOFF_STAR_TOTAL = 2
};
enum GAME_STATUS {
    GAME_STATUS_IDLE,
    GAME_STATUS_PLAYING,
    GAME_STATUS_PAUSED,
    GAME_STATUS_LOSE
};
enum MENU_STATUS {
    MENU_STATUS_START,
    MENU_STATUS_PLAYING,
    MENU_STATUS_PAUSED,
    MENU_STATUS_OPTIONS,
    MENU_STATUS_COUNTDOWN,
    MENU_STATUS_LOSE,
    MENU_STATUS_EXIT,
    MENU_STATUS_INTRODUCE
};
enum Otter_Sheet_Height {
    RUN_SHEET_HEIGHT = 160,
    JUMP_SHEET_HEIGHT = 160,
    FALL_SHEET_HEIGHT = 160,
    FAST_LANDING_HEIGHT = 160
};
enum CHARACTER_ACTION {
    CHARACTER_ACTION_RUN = 0,
    CHARACTER_ACTION_JUMP = 1,
    CHARACTER_ACTION_FALL = 2,
    CHARACTER_ACTION_FASTLANDING = 3
};
enum LSwitchSprite {
    SWITCH_SPRITE_MOUSE_ON,
    SWITCH_SPRITE_MOUSE_OFF,
    SWITCH_SPRITE_TOTAL
};
enum LButtonSprite
{
    BUTTON_SPRITE_MOUSE_OUT,
    BUTTON_SPRITE_MOUSE_OVER_MOTION,
    BUTTON_SPRITE_MOUSE_DOWN,
    BUTTON_SPRITE_MOUSE_UP,
    BUTTON_SPRITE_TOTAL
};

static MENU_STATUS menuStatus = MENU_STATUS_START;
static MENU_STATUS menuPre = menuStatus;
static GAME_STATUS gameStatus = GAME_STATUS_IDLE;

bool init();
bool loadMedia();
void clode();

void handle(const TO_DO& todo, const double& v = MIX_MAX_VOLUME);
bool checkCollision(vector<SDL_Rect>& a, vector<SDL_Rect>& b);
int generateRandomNumber(const int min, const int max);
