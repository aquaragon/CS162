#ifndef CRE_H
#define CRE_H
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

class CreditCard
{
public:
	CreditCard();
	CreditCard(string f,string la,string a, int n, double li);
	void setBalance(double b);
	void setCharge(double c);
	void setLimit(double l);
	void setCardNumber(int n);
	int getCardNumber();
	double getBalance();
	double getLimit();
	string getOwnerName();
	string getAddress();
	bool payBalance(double pay);
	bool makeCharge(double c);
	bool setCreditLimit(double l);
	double getCreditLimit();
private:
	Person pe;
	int number;
	double balance;
	double charge;
	double limit;
};
#endif
