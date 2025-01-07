#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_keyboard.h>
#include <SDL2/SDL_mouse.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_ttf.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define WINDOW_SIZE 1000

#define TIC (WINDOW_SIZE / 10)

#define BOARD_X_OFFSET TIC
#define BOARD_Y_OFFSET TIC

extern SDL_Renderer *renderer;
extern SDL_Window *window;
extern TTF_Font *defaultFont;

void terminate();
