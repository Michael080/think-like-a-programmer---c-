#include <iostream>

// Create a program that takes in the weight of an item and then calculates how much that item would weigh on Mars.
int main() {
	double earthWeight;
	std::cout << "Enter weight (on Earth):\n";
	std::cin >> earthWeight;
	// The surface gravity on Mars is approximately 3.711 m/s², which is about 38% of
	double marsWeight = earthWeight *.38;
	std::cout << "Weight on Mars: " << marsWeight << "\n";
}
