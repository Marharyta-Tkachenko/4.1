#pragma once
#include <iostream>

using namespace std;

class Area
{
private:
	int a;

public:
	Area();
	Area(int a);

	int GetA() const { return a; }
	
	void SetA(int value) { a = value; }

	virtual double Square() = 0;
	virtual void Print() = 0;
};

