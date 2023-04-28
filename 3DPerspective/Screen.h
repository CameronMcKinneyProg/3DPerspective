#pragma once

#include <SDL.h>
#include <vector>

class Screen
{
	SDL_Event e;
	SDL_Window* window;
	SDL_Renderer* renderer;
	std::vector<SDL_FPoint> points;

};

