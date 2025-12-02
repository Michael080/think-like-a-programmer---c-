#include <iostream>
#include <vector>

std::vector<int> first_three_multiples(int num) {
  std::vector<int> first_three;

  for (int i = 1; i <= 3; i++) {
    first_three.push_back(num * i);
  }

  return first_three;
}

int main() {
  first_three_multiples(3);

  // should print: `8 16 24`
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
}
