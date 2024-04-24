#include "Car.h"
using std::cout;
using std::endl;

Car::Car()
{
	cout << "�������� ����������� �1 " << this << endl;
	x = 0;
	y = 0;
	z = 0;
}


Car::Car(int x, int y)
{
	this->x = x;
	this->y = y;
	cout << "�������� ����������� �3 " << this << endl;
}

Car::Car(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
	cout << "�������� ����������� �2 " << this <<  endl;
}

Car::~Car()
{
	cout << "�������� ���������� ! " << this << endl;
}

int Car::getX()
{
	return x;
}

void Car::setX(int x)
{
	this->x = x;
}

int Car::getY()
{
	return y;
}

void Car::setY(int y)
{
	this->y = y;
}

int Car::getZ()
{
	return z;
}

void Car::setZ(int z)
{
	this->z = z;
}

void Car::Print()
{
	cout << "x = " << getX() << endl <<
			"y = " << getY() << endl <<
			"z = " << getZ() << endl;
}
