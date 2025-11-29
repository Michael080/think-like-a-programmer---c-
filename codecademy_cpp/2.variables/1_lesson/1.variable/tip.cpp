#include <iostream>

int main() {
	int tip = 0;
	std::cout << "Enter tip amount: ";
	// cin (pronounced: "See-in"), used for assigning input to var `tip`
	std::cin >> tip;
	//*print output:* You paid [tip] dollars.
	std::cout << "You paid " << tip << " dollars.\n";
}
