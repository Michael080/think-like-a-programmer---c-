#include <iostream>
#include <vector>

int main() {
  // size (unit)
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

  grocery.push_back("Pinata");
  grocery.push_back("Kazoo/s");

  std::cout << grocery.size() << "\n\n";

  // operations (unit)
  std::vector<double> delivery_order;
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99); 
   
  // calculate the total using a for loop
  double total;

  for (int i = 0; i < delivery_order.size(); i++) {
    total = total + delivery_order[i];
  }

  std::cout << "total: " << total << "\n";
}
