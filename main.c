#include "ttt.h"
SDL_Renderer *renderer;
SDL_Window *window;
TTF_Font *defaultFont;

int main() {
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO)) {
    printf("Error: %s\n", SDL_GetError());
    exit(0);
  }

  window =
      SDL_CreateWindow("Tic-Tac-Toe", SDL_WINDOWPOS_CENTERED,
                       SDL_WINDOWPOS_CENTERED, WINDOW_SIZE, WINDOW_SIZE, 0);

  renderer = SDL_CreateRenderer(window, -1, 0);

  TTF_Init();
  if ((defaultFont = TTF_OpenFont("fonts/Shooting Star.ttf", 32)) == NULL) {
    printf("Font not found");
    terminate();
  }
}

void terminate() {
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);

  SDL_Quit();
  exit(0);
}
