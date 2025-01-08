#ifndef TTT_H // Prüft, ob TTT_H definiert ist
#define TTT_H // Definiert TTT_wenn es nicht definiert ist

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

// Size-configs in pixels
#define WINDOW_SIZE 1000

#define TIC (WINDOW_SIZE / 10)

#define BOARD_X_OFFSET TIC
#define BOARD_Y_OFFSET TIC

// other defines
#define NUM_OF_FIELD 9

// structs
typedef struct ticandtac {
  char name;
  SDL_Rect rect;
} tictac;

// global variables

extern bool whois;

// SDL-things
extern SDL_Renderer *renderer;
extern SDL_Window *window;
extern TTF_Font *defaultFont;

// textures
extern SDL_Texture *background, *o, *x;

// global functions
//  end game
void terminate();

// Render functions
void render();
void loadTextures();
void drawText(SDL_Renderer *renderer, const int x, const int y,
              const char *text, TTF_Font **font, const SDL_Color *color);

#endif // beendet den #ifndef Block
