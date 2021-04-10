#include "Circle.h"

Circle::Circle()
	: Area(0)
{}

Circle::Circle(int a)
	: Area(a)
{}

void Circle::Print()
{
	cout << "S (square) of Circle = PI * radius ^ 2" << endl;
	cout << "The value of 'radius' is equal to: " << GetA() << endl;
}

double Circle::Square()
{
	const double PI = atan(1) * 4;
	return PI * GetA() * GetA();
}