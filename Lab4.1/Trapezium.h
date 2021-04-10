#pragma once
#include "Area.h" 

class Trapezium :public Area
{
private:
	int b, h;

public:
	Trapezium();
	Trapezium(int a, int b, int h);

	int GetB() const;
	int GetH() const;

	void SetB(int);
	void SetH(int);

	virtual double Square();
	virtual void Print();
};

