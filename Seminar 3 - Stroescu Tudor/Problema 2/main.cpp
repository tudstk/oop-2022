#include "Canvas.h"

int main() {
	Canvas foaie(50, 70);
	foaie.DrawRect(30, 5, 10, 40, '*');
	foaie.FillRect(29, 6, 11, 39, '*');
	foaie.Print();
	return 0;
}