/* Cameron McKinney 2023
Using C++14 Standard */

#include "Screen.h"
#include <numeric>

#undef main // fixes 'unresolved external symbol' error

void line(Screen& screen, float x1, float y1, float x2, float y2)
{
	float dx = x2 - x1;
	float dy = y2 - y1;

	float length = sqrt(dx * dx + dy * dy); // apply Pythagorean theory
	float angle = atan2(dy, dx);

	for (float i = 0; i < length; i++)
	{

	}
}

int main()
{
	Screen screen;

	for (int i = 0; i < 100; i++)
	{
		screen.pixel(rand() % 640, rand() % 480);
	}

	while (true)
	{
		screen.show();
		screen.input();
	}

	return 0;
}

