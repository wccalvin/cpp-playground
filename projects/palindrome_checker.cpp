#include <iostream>

bool is_palindrome(std::string text, bool is_debug = false) {
  std::string reverse_text;
  for (int i = text.size() - 1; i >= 0; i--) {
    reverse_text += text[i];
  }
  if (is_debug) {
    std::cout << text << std::endl;
    std::cout << reverse_text << std::endl;
  }
  if (text == reverse_text) {
    return true;
  }
  return false;
}

int main() {
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace", true) << "\n";
}