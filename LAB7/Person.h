#ifndef PER_H
#define PER_H
#include <iostream>
using namespace std;
class Person
{
public:
	Person();
	Person(string a, string b, string c);
	void setFirst(string x);
	void setLast(string y);
	void setAddress(string z);
	string getFirstName();
	string getLastName();
	string getAddress();
private:
	string first;
	string last;
	string address;
};
#endif
