#include "Rectangle.h"
using namespace std;

int Rectangle::GetA() const { return Area::GetA(); }
int Rectangle::GetB() const { return b; }

void Rectangle::SetA(int a) { Area::SetA(a); }
void Rectangle::SetB(int b) { this->b = b; }

Rectangle::Rectangle() : b(0) { Area::SetA(0); }
Rectangle::Rectangle(int a = 0, int b = 0) : b(b) { Area::SetA(a); }

void Rectangle::Print() {
	cout << "S (square) of Rectangle = wide * length" << endl;
	cout << "The value of 'wide' is equal to: " << GetA() << endl;
	cout << "The value of 'length' is equal to: " << GetB() << endl;
}

double Rectangle::Square() {
	return GetA() * GetB();
}