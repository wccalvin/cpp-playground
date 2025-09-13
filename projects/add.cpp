#include <iostream>

int add(int a, int b) { return a + b; }
int main() {
  int value = add(5, 10);
  std::cout << "value is " << value << std::endl;
}