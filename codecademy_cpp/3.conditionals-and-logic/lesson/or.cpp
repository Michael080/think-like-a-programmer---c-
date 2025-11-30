#include <iostream>

int main() {
	int day = 6;

	// c++ allows use of keyword `or` in place of `||`
	if (day == 6 or day == 7) {
		std::cout << "Weekend\n";
	}
}
