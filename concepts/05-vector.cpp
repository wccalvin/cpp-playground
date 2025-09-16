#include <iostream>
#include <vector>

int main() {
  // initialize vector
  std::vector<int> scores;

  // with specific values
  std::vector<double> location{13.08, 80.27};

  // presizing
  std::vector<double> loc2(2);

  // accessing individual elements
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::cout << "Third element of the vowel is " << vowels[2] << std::endl;
  return 0;
}