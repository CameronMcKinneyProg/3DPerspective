#pragma once

#include <SDL.h>
#include <vector>

class Screen
{
	SDL_Event e;
	SDL_Window* window;
	SDL_Renderer* renderer;
	std::vector<SDL_FPoint> points;

	Screen()
	{
		SDL_Init(SDL_INIT_VIDEO);
		SDL_CreateWindowAndRenderer(640 * 2, 480 * 2, 0, &window, &renderer);
		SDL_RenderSetScale(renderer, 2, 2);
	}

	
};

