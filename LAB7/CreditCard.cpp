#include "CreditCard.h"

CreditCard::CreditCard()
{

}

CreditCard::CreditCard(string f, string la, string a, int n, double li)
{
	pe.setFirst(f);
	pe.setLast(la);
	pe.setAddress(a);
	number = n;
	limit = li;
	setBalance(0);
}

void CreditCard::setBalance(double b)
{
	balance = b;
}

void CreditCard::setCharge(double c)
{
	charge = c;
}

void CreditCard::setLimit(double l)
{
	limit = l;
}

void CreditCard::setCardNumber(int n)
{
	number = n;
}

int CreditCard::getCardNumber()
{
	return number;
}

double CreditCard::getBalance()
{
	return balance;
}

double CreditCard::getLimit()
{
	return limit;
}

string CreditCard::getOwnerName()
{
	string space = " ";
	string first = pe.getFirstName();
	string last = pe.getLastName();
	string fullName = first + space + last;
	return fullName;
	
}

string CreditCard::getAddress()
{
	return pe.getAddress();
}

bool CreditCard::payBalance(double pay)
{
	if (pay > 0)
	{
		setBalance(getBalance() - pay);
		return true;
	}
	else
		return false;
}

bool CreditCard::makeCharge(double c)
{
	if ((c > 0) && (c + getBalance() < getLimit()))
	{
		setBalance(c + getBalance());
		return true;
	}
	else
		return false;
}

bool CreditCard::setCreditLimit(double l)
{
	if (l > 0)
	{
		limit = l;
		return true;
	}
	else
		return false;
		
}

double CreditCard::getCreditLimit()
{
	return limit;
}


