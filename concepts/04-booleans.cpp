#include <iostream>
using namespace std;

int main() {
  int level{10};
  bool isLevel9{level == 9};
  cout << "isLevel9 is " << isLevel9 << endl;
  level--;
  isLevel9 = (level == 9);
  cout << "isLevel9 is now " << isLevel9 << endl;
  return 0;
}