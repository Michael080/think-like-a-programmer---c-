#include <iostream>

// The function should return a double that is the average of the arguments passed in
double average(double num1, double num2) {
  return (num1 + num2) / 2;
}

int main() {
  std::cout << average(3, 5) << "\n";
}
