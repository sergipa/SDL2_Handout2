#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#include <windows.h>
#include <stdio.h>

#include "SDL/include/SDL.h"

#pragma comment( lib, "SDL/libx86/SDL2.lib" )
#pragma comment( lib, "SDL/libx86/SDL2main.lib" )

#define LOG(txt) OutputDebugString(txt)

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

enum update_status
{
	UPDATE_CONTINUE = 1,
	UPDATE_STOP,
	UPDATE_ERROR
};

// Configuration -----------
#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768
#define FULLSCREEN SDL_WINDOW_FULLSCREEN
#define RESIZABLE SDL_WINDOW_RESIZABLE
#define BORDERLESS SDL_WINDOW_BORDERLESS

#endif // __GLOBALS_H__
