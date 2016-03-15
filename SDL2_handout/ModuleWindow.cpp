#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"
#include <iostream>


// TODO 2: Init the library and check for possible error
// using SDL_GetError()
bool ModuleWindow :: Init(){
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		char test[50];
		sprintf_s(test, "The error is %s", SDL_GetError());
		LOG(test);
	}
	else LOG("SDL_INIT succeded\n");
	
//WINDOW THING
	
	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow(
		"THIS IS A WINDOW",                  // window title
		200,           // initial x position
		200,           // initial y position
		SCREEN_WIDTH,                      // width, in pixels
		SCREEN_HEIGHT,                     // height, in pixels
		RESIZABLE             // flags - see below
		);


	screen = SDL_GetWindowSurface(window);

	SDL_UpdateWindowSurface(window);
	SDL_Delay(2000);



	LOG("\nModuleWindow Init\n");
	return true;
}
bool ModuleWindow :: CleanUp(){
	LOG("\nModuleWindow Cleaned\n");
	SDL_DestroyWindow(window);
	SDL_Quit();
	return true;
}
// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

