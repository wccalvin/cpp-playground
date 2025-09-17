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

  // add elements to the back or end of the vector
  std::vector<std::string> colors_of_rainbow = {"Red", "Orange", "Yellow"};
  // size of the vector
  std::cout << "colors of rainbow is " << colors_of_rainbow.size() << std::endl;
  colors_of_rainbow.push_back("Green");
  colors_of_rainbow.push_back("Blue");
  colors_of_rainbow.push_back("Indigo");
  colors_of_rainbow.push_back("Violet");
  std::cout << "Now the colors of rainbow is " << colors_of_rainbow.size()
            << std::endl;
  std::cout << "Last but one color of the rainbow is " << colors_of_rainbow[5]
            << std::endl;

  // remove elements from the back of the vector
  colors_of_rainbow.pop_back();  // has no return value
  std::cout << "Now the colors of rainbow is " << colors_of_rainbow.size()
            << std::endl;

  return 0;
}