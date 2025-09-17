#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers;
  numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int even_sum = 0;
  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] % 2 == 0) {
      even_sum += numbers[i];
    }
  }
  std::cout << "Sum of even numbers is: " << even_sum << std::endl;
  return 0;
}