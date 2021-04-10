#pragma once
#include "Area.h"

class Circle :public Area
{
public:
	Circle();
	Circle(int a);

	virtual double Square();
	virtual void Print();
};

