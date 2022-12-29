#include "Triangle.h"

using namespace std;

//sets a to x
void Triangle::setA(int x)
{
	a = x;
}

//sets b to y
void Triangle::setB(int y)
{
	b = y;
}

//sets c to z
void Triangle::setC(int z)
{
	c = z;
}


//returns a value
int Triangle::getA()
{
	return a;
}

//returns b value
int Triangle::getB()
{
	return b;
}

//returns c value
int Triangle::getC()
{
	return c;
}

//checks for equilaterial triangle
bool Triangle::isEquilateral()
{
	if ((getA() == getB()) && (getB() == getC())) //compares all lengths of triangle
		return true;
	else
		return false;
}

//checks for scalene triangle
bool Triangle::isScalene()
{
	if ((getA() != getB()) && (getA() != getC()) && (getB() != getC())) //checks for no side equal to another
		return true;
	else
		return false;
}

//checks for isoceles
bool Triangle::isIsosceles()
{
	if (getA() == getB() || getA() == getC() || getB() == getC()) //makes sure only 2 sides are equal
		return true;
	else
		return false;
}

//checks for right triangle
bool Triangle::isRight()
{
	if ((((getA() ^ 2) + (getB() ^ 2)) == (getC() ^ 2)) || (((getC() ^ 2) + (getB() ^ 2)) == (getA() ^ 2)) || (((getC() ^ 2) + (getA() ^ 2)) == (getB() ^ 2))) //Pythagorean Theorem

		return true;
	else
		return false;
}

//default constrcutor
Triangle::Triangle(int q, int w, int e)
{
	a = q;
	b = w;
	c = e;

}
