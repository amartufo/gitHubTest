//SDL program 
//Ubuntu Linux 16.10
//Author: Amar Tufo

#include <SDL/SDL.h>
#include <SDL/SDL_opengl.h>
#include <iostream>
using namespace std;

int main()
{
  SDL_Init(SDL_INIT_EVERYTHING);

  //HOW MUCH MEMORY DOES EACH FUNCTION REQUIRED
  SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
  SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);
  SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
  SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

  SDL_WM_SetCaption("GAME WINDOW", NULL);

  SDL_SetVideoMode(600, 400, 32, SDL_OPENGL);  
  
  //main game loop start's here
  
  //For handling with events
  SDL_Event event;  
  
  //Handles the main loop
  bool isRunning = true;   
  
  //Main game loop
  while(isRunning) 
  {
    //EVENTS
     while(SDL_PollEvent (&event) )
     {  //Closing the window by pressing [x] button
      if (event.type == SDL_QUIT)
       {
         isRunning = false;
         cout <<"Game window closed on [x] button!"<<endl;
       }
      if (event.type == SDL_KEYUP & event.key.keysym.sym == SDLK_ESCAPE)
       {
         isRunning = false;
         cout <<"Game window closed on [ESCAPE] button!"<<endl;
       }
     }
  
    //LOGIC


    //RENDERING

  }
  

  SDL_Quit();

  return 0;


}
