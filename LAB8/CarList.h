#ifndef CARLIST_H
#define CARLIST_H
#include "Car.h"

//creates a struct with pointer to next and car object
struct Link
{
	Car * value;
	Link * next;
};


class CarList
{

	private:
		Link * head;
	public:
		CarList();
		~CarList();
		void addCar(string make, string color, int year);
		bool findCar(string make, string color, int year);
		Car *removeHead();
		string displayList();
		




	

};

#endif 

