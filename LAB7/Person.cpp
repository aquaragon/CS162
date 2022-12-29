#include "Person.h"

void Person::setFirst(string x)
{
	first = x;
}

void Person::setLast(string y)
{
	last = y;
}

void Person::setAddress(string z)
{
	address = z;
}

string Person::getFirstName()
{
	return first;
}

string Person::getLastName()
{
	return last;
}

string Person::getAddress()
{
	return address;
}

Person::Person()
{
}



//default constructor
Person::Person(string a, string b, string c)
{
	first = a;
	last = b;
	address = c;
}


