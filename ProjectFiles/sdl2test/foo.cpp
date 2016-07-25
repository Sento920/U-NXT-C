// using SDL and Standard IO
#include <SDL2/SDL.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>

//Screen Dimension Constants.
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main ( int argc, char* args[] ){
    //The window we will be rendering too
    SDL_Window* window = NULL;
    
    //The surface contained by the window
    SDL_Surface* screenSurface = NULL;
    
    //Initialize SDL.
    if( SDL_Init ( SDL_INIT_VIDEO ) < 0 ){
        printf( "SDL could not Initialize! SDL_Error: %s\n", SDL_GetError() );
    }else {
        //Create the window.
        window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED , SDL_WINDOWPOS_UNDEFINED , SCREEN_WIDTH , SCREEN_HEIGHT , SDL_WINDOW_SHOWN );
        
        if(window == NULL){
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError() );
        }else {
          //get the current window
            screenSurface = SDL_GetWindowSurface( window );
          //Fill with white, since its a tutorial.
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB( screenSurface->format,0xFF,0xFF,0xFF ));
            //update the window.
            SDL_UpdateWindowSurface( window );
            
            //Wait two seconds
            SDL_Delay( 2000 );
            
            SDL_DestroyWindow( window );
            
            SDL_Quit();
            
            return 0;
            
            
        }
    
    }
    
    
}
