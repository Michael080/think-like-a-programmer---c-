#include <iostream>
#include <string>
/*
Optional Project:
Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
There are 3 criteria that must be taken into account to identify a leap year:

If the year can be evenly divided by 4 then it is a leap year, however…
If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.
divisibleByFour && divisibleByOneHundred && !divisibleByFourHundred => NOT leap year
If that year is evenly divisible by 400, then it is a leap year.
divisibleByFour && divisibleByOneHundred && divisibleByFourHundred => IS leap year
*/
int main() {
	int year;
	// get year from user
	std::cout << "Enter year:\n";
	std::cin >> year;
	// booleans
	bool divisibleByFour = year % 4 == 0;
	bool divisibleByOneHundred = year % 100 == 0;
	bool divisibleByFourHundred = year % 400 == 0;
	// confirmation messages
	std::string message = "The year ";
	std::string isLeapYear = "is a leap year!\n";
	std::string notLeapYear = "is not a leap year :(\n";

	if (divisibleByFour) {
		// years divisible by 4 & 100 but not also by 400 aren't leaps
		if (divisibleByOneHundred && !divisibleByFourHundred) {
			std::cout << message << year << " " << notLeapYear;
			return 0;
		}
			std::cout << message << year << " " << isLeapYear;
	// years not divisible by four are ALL NOT leaps
	} else {
		std::cout << message << year << " " << notLeapYear;
	}
}
