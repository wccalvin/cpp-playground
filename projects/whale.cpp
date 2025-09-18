#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string phrase = "turpentine and turtles";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;
  for (int i = 0; i < phrase.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (phrase[i] == vowels[j]) {
        result.push_back(phrase[i]);
        if (phrase[i] == 'e' || phrase[i] == 'u') {
          result.push_back(phrase[i]);
        }
      }
    }
  }
  for (int k = 0; k < result.size(); k++) {
    std::cout << result[k];
  }
  std::cout << std::endl;
  return 0;
}