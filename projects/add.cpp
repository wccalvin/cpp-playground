#include <iostream>

int add(int a, int b) { return a + b; }
bool isOdd(int n) { return n % 2; }
void printBool(bool val) {
  if (val) {
    std::cout << "True";
  } else {
    std::cout << "False";
  }
}
int main() {
  int value = add(5, 10);
  std::cout << "value is " << value << std::endl;
  std::cout << "is 4 an odd number? ";
  printBool(isOdd(4));
  std::cout << std::endl;
  std::cout << "is 7 an odd number? ";
  printBool(isOdd(7));
  std::cout << std::endl;
}