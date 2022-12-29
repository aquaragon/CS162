#include "Car.h"


//default constructor
Car::Car(string x, string y, int z)
{
	make = x;
	color = y;
	year = z;
}

//sets make to m
void Car::setMake(string m)
{
	make = m;
}

//sets color to c
void Car::setColor(string c)
{
	color = c;
}

//sets year to y
void Car::setYear(int y)
{
	year = y;
}

//returns make
string Car::getMake()
{
	return make;
}

//returns color
string Car::getColor()
{
	return color;
}

//returns year
int Car::getYear()
{
	return year;
}

//compares Car objects
bool Car::operator==(const Car &rhs) const
{
	if ((this->make == rhs.make) && (this->color == rhs.color) && (this->year == rhs.year))
		return true;
	else
		return false;
}

