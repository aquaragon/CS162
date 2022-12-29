#include <iostream>

// uncomment this line to test Person
#define PERSON_TEST

// uncomment this line to test CreditCard
#define CC_TEST

#ifdef PERSON_TEST
#include "Person.h"
#endif

#ifdef CC_TEST
#include "CreditCard.h"

#endif

int main() {

#ifdef PERSON_TEST
	std::cout << "\nPerson Test" << std::endl;
	Person bob = Person();
	Person marge = Person("Marge", "Inovera", "321 Stats Lane\n");

	std::cout << "Displaying Bob (all should be blank)\n";
	std::cout << " First Name: " << bob.getFirstName() << ", ";
	std::cout << "Last Name: " + bob.getLastName() << ", ";
	std::cout << "Address: " + bob.getAddress() << std::endl;

	std::cout << "\nMarge, expected output is\n";
	std::cout << " First Name: Marge, Last Name: Inovera, Address: 321 Stats Lane\n";
	std::cout << "Actual Result\n";
	std::cout << " First Name: " + marge.getFirstName() << ", ";
	std::cout << "Last Name: " + marge.getLastName() << ", ";
	std::cout << "Address: " + marge.getAddress() << std::endl;

#endif // PERSON_TEST

#ifdef CC_TEST
	std::cout << "\n\nCredit Card Test";
	CreditCard discover = CreditCard("Lou", "Pole", "456 Haven Ave", 8675309, 5000);
	std::cout << "Card Number - Expected: 8675309, Actual: " << (discover.getCardNumber()) << std::endl;
	std::cout << "Card Holder Name - Expected: Lou Pole, Actual: " + discover.getOwnerName() << std::endl;
	std::cout << "Address - Expected: 456 Haven Ave, Actual: " + discover.getAddress() << std::endl;
	std::cout << "Credit Limit - Expected: 5000, Actual: " << (discover.getCreditLimit()) << std::endl;
	std::cout << "Balance - Expected: 0, Actual: " << (discover.getBalance()) << std::endl;

	if (discover.makeCharge(3000))
		std::cout << "\nCharge of 3000 applied correctly\n";
	else
		std::cout << "\nCharge failed";
	std::cout << "Balance - Expected: 3000, Actual: " << (discover.getBalance()) << std::endl;

	if (discover.makeCharge(4000))
		std::cout << "\nAdditional Charge of 4000 allowed in error\n";
	else
		std::cout << "\nCard declined correctly\n";
	std::cout << "Balance - Expected: 3000, Actual: " << (discover.getBalance()) << std::endl;

	if (discover.makeCharge(-500))
		std::cout << "\nNegative charge allowed in error\n";
	else
		std::cout << "\nNegative charge denied correctly\n";
	std::cout << "Balance - Expected: 3000, Actual: " << (discover.getBalance()) << std::endl;

	if (discover.payBalance(400))
		std::cout << "\nPayment of 400 accepted correctly\n";
	else
		std::cout << "\nPayment denied in error\n";
	std::cout << "Balance - Expected: 2600, Actual: " << (discover.getBalance()) << std::endl;

	if (discover.payBalance(-500))
		std::cout << "\nNegative payment accepted in error\n";
	else
		std::cout << "\nNegative payment denied correctly\n";
	std::cout << "Balance - Expected: 2600, Actual: " << (discover.getBalance()) << std::endl;

	std::cout << "\nNow setting credit limit to 10000\n";
	discover.setCreditLimit(10000);
	std::cout << "Credit Limit - Expected: 10000, Actual: " << (discover.getCreditLimit()) << std::endl;

	if (discover.makeCharge(4000))
		std::cout << "\nAdditional charge of 4000 applied correctly\n";
	else
		std::cout << "\nCharge denied in error\n";
	std::cout << "Balance - Expected: 6600, Actual: " << (discover.getBalance()) << std::endl;

	if (discover.setCreditLimit(5000))
		std::cout << "\nCredit Limit reduced below current balance correctly.\n";
	else
		std::cout << "Balance modification failed in error\n";
	std::cout << "Credit Limit - Expected: 5000, Actual: " << (discover.getCreditLimit()) << std::endl;
	std::cout << "Balance - Expected: 6600, Actual: " << (discover.getBalance()) << std::endl;

	if (discover.makeCharge(5))
		std::cout << "\nAdditional Charge of 5 allowed in error\n";
	else
		std::cout << "\nCard declined correctly\n";
	std::cout << "Balance - Expected: 6600, Actual: " << (discover.getBalance()) << std::endl;

	if (discover.payBalance(7000))
		std::cout << "\nPayment of 7000 accepted correctly\n";
	else
		std::cout << "\nPayment denied in error";
	std::cout << "Balance - Expected: -400, Actual: " << (discover.getBalance()) << std::endl;
#endif // CC_TEST
}