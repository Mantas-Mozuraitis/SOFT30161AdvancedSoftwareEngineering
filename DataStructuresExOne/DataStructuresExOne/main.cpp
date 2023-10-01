#include "Coordinate.h"

int main()
{
	Coordinate p2(3, 7);
	p2.yco = p2.yco + 5;
	p2.display();

	Coordinate* coPtr = new Coordinate(3,7); //creating new struct on the heap
	coPtr->display();
	Coordinate co2 = *coPtr; //pointer dereferencing
	co2.display();
	Coordinate* coPtr2 = &co2; //returning a pointer to the co2
	coPtr->display();


}