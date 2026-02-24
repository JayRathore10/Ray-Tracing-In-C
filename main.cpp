#include<SDL2/SDL.h>

#define WIDTH 1200
#define HEIGHT 400

int main(int argc  , char** args){
  SDL_Window* window = SDL_CreateWindow("Ray Tracing", SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , WIDTH , HEIGHT, 0);

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