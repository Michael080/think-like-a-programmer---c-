#include <iostream>
// check if string is palindrome

bool is_palindrome(std::string text) {
  for (int i = 0; i < text.length(); i++) {
    // reverse iterator
    int j = text.length() - i;
    
    if (text.at(i) != text.at(j - 1)) {
      return false;
    }

  }
  return true;
}

int main() {
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}
