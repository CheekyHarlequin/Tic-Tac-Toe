#include "ttt.h"

SDL_Texture *background_Texture, *o_Texture, *x_Texture, *playfield_Texture;

void drawText(SDL_Renderer *renderer, const int x, const int y,
              const char *text, TTF_Font **font, const SDL_Color *textColor) {
  const SDL_Color defaultColor = {0, 0, 0};

  // Draw with the according color
  SDL_Surface *surface =
      TTF_RenderText_Solid((font == NULL) ? defaultFont : *font, text,
                           (textColor == NULL) ? defaultColor : *textColor);

  // Draw to texture
  SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surface);

  SDL_FreeSurface(surface);

  // Adjust position
  SDL_Rect textRect;

  SDL_QueryTexture(texture, NULL, NULL, &textRect.w, &textRect.h);

  textRect.x = x - textRect.w / 2, textRect.y = y - textRect.h / 2;

  SDL_RenderCopy(renderer, texture, NULL, &textRect);
}

// shortcute for loadTextures
SDL_Texture *loadTexture(char *path) {
  SDL_Texture *texPtr;

  SDL_Surface *surface = IMG_Load(path);

  texPtr = SDL_CreateTextureFromSurface(renderer, surface);

  SDL_FreeSurface(surface);

  return texPtr;
}
// load all textures from surface
void loadTextures() {
  background_Texture = loadTexture("textures/background.png");
  o_Texture = loadTexture("textures/O.png");
  x_Texture = loadTexture("textures/x.png");
  playfield_Texture = loadTexture("playfield.png");
}
