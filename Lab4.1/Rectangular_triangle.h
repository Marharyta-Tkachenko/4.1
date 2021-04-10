#pragma once
#include "Area.h"

class Rectangular_triangle :public Area
{
private:
	int b;
public:
	int GetB() const;
	void SetB(int);

	Rectangular_triangle();
	Rectangular_triangle(int a, int b);

	virtual double Square();
	virtual void Print();
};

