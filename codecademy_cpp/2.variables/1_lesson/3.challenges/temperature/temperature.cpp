#include <iostream>
/*
Challenge Description:

The mad scientist Kelvin has mastered predicting the weather in his mountain-side meteorology lab.
Recently, Kelvin began publishing his weather forecasts on his website, however, there’s a problem: All of his forecasts describe the temperature in Fahrenheit degrees.
Let’s convert a temperature from Fahrenheit (F) to Celsius (C).

The formula is the following:
C=(F−32)/1.8
*/
int main() {
	double tempf;
	std::cout <<  "Enter the temperature in Fahrenheit: ";
	std::cin >> tempf;
	double tempc = (tempf - 32) / 1.8;
	// print: The temp is [tempc] degrees Celsius.
	std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}
