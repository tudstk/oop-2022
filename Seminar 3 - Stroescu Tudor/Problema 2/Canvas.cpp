#include "Canvas.h"
#include <iostream>
#include <cmath>

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	memset(canvas, ' ', sizeof(canvas));
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	DrawLine(left, top, right, top, ch);
	DrawLine(left, top, left, bottom, ch);
	DrawLine(right, top, right, bottom, ch);
	DrawLine(left, bottom, right, bottom, ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = right; i <= left; i++)
		for (int j = top; j <= bottom; j++)
			SetPoint(i, j, ch);
}

void Canvas::SetPoint(int x, int y, char ch)
{
	canvas[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx = abs(x2 - x1);
	int sx = x1 < x2 ? 1 : -1;
	int dy = -abs(y2 - y1);
	int sy = y1 < y2 ? 1 : -1;
	int error = dx + dy;

	while (true)
	{
		SetPoint(x1, y1, ch);
		if (x1 == x2 && y1 == y2)
			break;
		int e2 = 2 * error;
		if (e2 >= dy) {
			if (x1 == x2) break;
			error += dy;
			x1 += sx;
		}
		if (e2 <= dx) {
			if (y1 == y2) break;
			error += dx;
			y1 += sy;
		}
	}

}

void Canvas::Print()
{
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++)
			std::cout << canvas[i][j];
		std::cout << " " << '\n';
	}
}

void Canvas::Clear()
{
	memset(canvas, ' ', sizeof(canvas));

}
