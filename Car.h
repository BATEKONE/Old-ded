#pragma once
#include<iostream>
class Car
{
private:
	int x;
	int y;
	int z;
public:
	Car();
	Car(int x, int y);
	Car(int x, int y, int z);
	~Car();
	int getX();
	void setX(int x);
	int getY();
	void setY(int y);
	int getZ();
	void setZ(int z);
	void Print();
};

