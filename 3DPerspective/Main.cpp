/* Cameron McKinney 2023
Using C++14 Standard */

#include "Screen.h"
#include <numeric>

#undef main // fixes 'unresolved external symbol' error

struct vec3
{
	float x, y, z;
};

void rotate(vec3& point, float x = 1, float y = 1, float z = 1)
{
	float rad = 0;

	rad = x;
	point.y = cosf(rad) * point.y - sinf(rad) * point.z;
	point.z = sinf(rad) * point.y + cosf(rad) * point.z;

	rad = y;
	point.x = cosf(rad) * point.x + sinf(rad) * point.z;
	point.z = -sinf(rad) * point.x + cosf(rad) * point.z;

	rad = z;
	point.x = cosf(rad) * point.x - sinf(rad) * point.y;
	point.y = sinf(rad) * point.x + cosf(rad) * point.y;
}

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

	/*// draw pixels at random positions
	for (int i = 0; i < 100; i++)
	{
		screen.pixel(rand() % 640, rand() % 480);
	}*/

	/*// draw static square
	line(screen, 100, 100, 200, 100);
	line(screen, 200, 100, 200, 200);
	line(screen, 200, 200, 100, 200);
	line(screen, 100, 200, 100, 100);*/



	while (true)
	{
		screen.show();
		screen.input();
	}

	return 0;
}

