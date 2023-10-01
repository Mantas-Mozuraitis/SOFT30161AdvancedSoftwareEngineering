#include "Coordinate.h"
#include <iostream>

using namespace std;

Coordinate::Coordinate(int x, int y)
{
	xco = x;
	yco = y;
}

void Coordinate::display()
{
	std::cout << '(' << xco << ',' << yco << ')' << std::endl;
}