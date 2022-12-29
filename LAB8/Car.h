#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Car
{
	string make;
	string color;
	int year;
public:
	Car()
	{
		setYear(1910);
		setColor("Black");
		setMake("Ford");
	};
	Car(string x, string y, int z);
	void setMake(string m);
	void setColor(string c);
	void setYear(int y);
	string getMake();
	string getColor();
	int getYear();
	bool operator==(const Car &rhs) const;
	friend ostream &operator<<(ostream &output, const Car &rhs) {
		output << rhs.year << " " << rhs.color << " " << rhs.make;
		return output;
	}
};
#endif
