/* Cameron McKinney 2023
Using C++14 Standard */

#include "Screen.h"
#include <numeric>

#undef main // fixes 'unresolved external symbol' error

void line(Screen& screen, float x1, float y1, float x2, float y2)
{
	float dx = x2 - x1;
	float dy = y2 - y1;

	float length = sqrtf(dx * dx + dy * dy); // apply Pythagorean theory
	float angle = atan2f(dy, dx);

	for (float i = 0; i < length; i++)
	{
		screen.pixel(x1 + cosf(angle) * i, y1 + sinf(angle) * i);
	}
}

int main(int argc, char* args[])
{
	Screen screen;

	for (int i = 0; i < 100; i++)
	{
		screen.pixel(rand() % 640, rand() % 480);
	}

	line(screen, 100, 100, 200, 100);
	line(screen, 200, 100, 200, 200);
	line(screen, 200, 200, 100, 200);
	line(screen, 100, 200, 100, 100);

	while (true)
	{
		screen.show();
		screen.input();
	}

	return 0;
}

