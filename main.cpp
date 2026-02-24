#include<SDL2/SDL.h>

#define WIDTH 1200
#define HEIGHT 400
#define COLOR_WHITE 0xffffff

typedef struct Circle{
  double x ;
  double y ;
  double radius;
} Circle;

typedef struct Ray{
  double x_start ;
  double y_start ;
  double angle ;
}Ray;

int main(int argc  , char** args){
  SDL_Window* window = SDL_CreateWindow("Ray Tracing", SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , WIDTH , HEIGHT, 0);

  SDL_Surface* surface = SDL_GetWindowSurface(window);

  SDL_Rect dest = (SDL_Rect) {10 , 10 , 10, 10};

  SDL_FillRect(surface , &dest , COLOR_WHITE);

  SDL_UpdateWindowSurface(window);

  SDL_Event event ;
  int running = 1;

  while(running){
    while(SDL_PollEvent(&event)){
      if(event.type == SDL_QUIT){
        running = 0;
        SDL_Delay(10);
      }
    }
  }

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}