#ifndef __ModuleRenderer_H__
#define __ModuleRenderer_H__

#include "Globals.h"
#include "ModuleWindow.h"
class ModuleRenderer : public Module{
public:
	SDL_Renderer *renderer;
public:

	bool Init(){
	};
	update_status PreUpdate();
	update_status PostUpdate();

	bool CleanUp();
};
#endif