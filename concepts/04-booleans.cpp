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

  // common mistakes
  // 1) need to repeat the variable name
  int value = 10;
  if (value == 5 || 20) {
    cout << "how can this be true? ..." << endl;
  }
  if (value == 5 || value == 20) {
    cout << "value is" << value << endl;
  } else {
    cout << "now this is fixed.." << endl;
  }

  // 2) && is evaluate first use () to clarify intentions
  bool isReady{value == 10 || value == 20 && isProcDead};
  cout << "isReady value is " << isReady << endl;
  isReady = (value == 10 || value == 20) && isProcDead;
  cout << "isReady value is now " << isReady << endl;

  return 0;
}