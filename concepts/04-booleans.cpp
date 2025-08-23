#include <iostream>
using namespace std;

int main() {
  // basic booleans
  bool isAvailable{true};
  cout << "isAvailable is " << isAvailable << endl;
  isAvailable = false;
  cout << "isAvailable is now " << isAvailable << endl;

  // creating conditional boolean
  int level{10};
  bool isLevel9{level == 9};
  cout << "isLevel9 is " << isLevel9 << endl;
  level--;
  isLevel9 = (level == 9);
  cout << "isLevel9 is now " << isLevel9 << endl;

  // inverting boolean
  bool isProcAlive{true};
  bool isProcDead{!isProcAlive};
  cout << "isProcAlive is " << isProcAlive << endl;
  cout << "isProcDead is " << isProcDead << endl;
  return 0;
}