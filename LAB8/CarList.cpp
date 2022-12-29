#include "CarList.h"

//constructor sets head to nullptr
CarList::CarList()
{
	 head = nullptr;
}

//deletes links in list
CarList::~CarList()
{
	Link* temphead = head;
	while (head != nullptr)
	{
		temphead = head;
		head = head->next;
		delete temphead;
	} 
}

//adds car to list, creates new pointer, points to new head of list
void CarList::addCar(string make, string color, int year)
{
	Car * newCar = new Car(make, color, year);
	Link * newLink = new Link;
	newLink->value = newCar;
	newLink->next = head;
	head = newLink;
}

//finds car through overloaded equality operator
bool CarList::findCar(string make, string color, int year)
{
	Link * temphead = head;
	Car tempCar = Car(make, color, year);
	while (temphead != nullptr)
	{
		if (tempCar == *(temphead->value))
			return true;

		temphead = temphead->next;	
	}
	
	return false;
}

//removes head of list, returns pointer of new head
Car * CarList::removeHead()
{
	if (head == nullptr)
		return nullptr;
	Link*temphead = head;
	head = head->next;
	Car * value = temphead->value;
	delete temphead;
	return value;
}

//streams strings of car objects and returns the stream
string CarList::displayList()
{
	stringstream stream;
	Link*temphead = head;
	do
	{
		stream << *(temphead->value) << ", ";
		temphead = temphead->next;
	} while (temphead != nullptr);
	return stream.str();
}