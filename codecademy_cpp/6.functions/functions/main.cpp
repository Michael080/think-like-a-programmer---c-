#include <iostream>

// void function - can't be defined nested w/in `main()` *will throw error*
void oscar_wilde_quote() {
  std::cout << "The highest, as the lowest, form of criticism is a mode of autobiography.";
  }

// bool function returns non-integer datatype so must be defined here
bool needs_it_support() {
  bool support;
  
  std::cout << "Hello. IT. Have you tried turning it off and on again? Enter 1 for yes, 0 for no.\n";
  // commented to prevent queries while working on other problems
  // std::cin >> support;
  support = true;
  return support;
}

void get_emergency_number(std::string emergency_number) {
  std::cout << "Dial " << emergency_number << "\n";
}

void name_x_times(std::string name, int x) {
  while(x > 0) {
    std::cout << name << "\n";
    x--;
  }
}

int main() {
  // this seeds the random number generator:
  srand (time(NULL));

  int the_amazing_random_number = rand() % 28;
  std::cout << the_amazing_random_number << "\n\n";
  // ----------------------------------------------

  // call void function
  oscar_wilde_quote();
  // -------------------

  // print bool value of `support`
  std::cout << needs_it_support() << "\n";
  // -------------------------------------
   // Original emergency services number 
  std::string old_emergency_number = "999";
  
  // For nicer ambulances, faster response times
  // and better-looking drivers
  std::string new_emergency_number = "0118 999 881 999 119 725 3";
  
  // Call get_emergency_number() below with
  // the number you want!
  get_emergency_number(new_emergency_number);
  // -------------------------------------------------------------
  
  std::string my_name = "Polo";
  int some_number = 5; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  name_x_times(my_name, some_number);
}
