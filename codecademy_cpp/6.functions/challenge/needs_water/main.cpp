#include <iostream>

// First argument: An int number of days since the previous watering.
// Second argument: A bool value is_succulent. (A value of true would indicate that the plant is a succulent.)
std::string needs_water(int days, bool is_succulent) {
  const std::string DONT_WATER = "Don't water the plant!";

  // # succulent
  if (is_succulent) {
    if (days <= 12) {
      //return "Don't water the plant!";
      return DONT_WATER;
    } else {
      return "Go ahead and give the plant a little water.";
    }
  // # non-succulent
} else { 
    if (days >= 3) {
      return "Time to water the plant.";
    } else {
      //return "Don't water the plant!";
      return DONT_WATER;
    }
  }
    return 0;
}

int main() {
  // # succulent
  // water
  std::cout << "RESULT: " << needs_water(13, true) << "\n\n";
  // don't water
  std::cout << "RESULT: " << needs_water(12, true) << "\n\n";
   
  // # non-succulent
  // water
  std::cout << "RESULT: " << needs_water(3, false) << "\n\n";
  // dont water 
  std::cout << "RESULT: " << needs_water(2, false) << "\n\n";
  
}
