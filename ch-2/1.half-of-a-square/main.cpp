#include <iostream>
using namespace std;

// NOTE: this problem was surprisingly easy, I suspect if this was my first programming book, it would have been mostly frustrating, but def not solved in 5 mins!

// Write a program that uses only two output statements, cout << "#" and cout << "\n", to produce a pattern of hash symbols shaped like half of a perfect 5 x 5 square (or a right triangle):
// #####
// ####
// ###
// ##
// #

int main() {
  for (int i = 5; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      cout << "#";
    }
    cout << "\n";
  }
}
