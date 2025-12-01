#include <iostream>
#include <vector>

// Write a program to find the sum of even numbers and the product of odd numbers in a vector.
int main() {
  std::vector<int> blob = {2, 4, 3, 6, 1, 9};
  int sumEven = 0;
  int oddProduct = 1;
  for (int i = 0; i < blob.size(); i++) {
    int item = blob[i];
    sumEven = sumEven + item;
    oddProduct = oddProduct * item;
  }

  std::cout << "Sum (even numbers): " << sumEven << "\n";
  std::cout << "Product (odd numbers): " << oddProduct << "\n";
}
