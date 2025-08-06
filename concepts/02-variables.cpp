#include <iostream>
using namespace std;

int main() {
  bool isAlive;     // initialization
  isAlive = false;  // value assignment
  float pi = 3.14;  // copy initialization
  int level{5};     // uniform initialization
  string name{"john mclane"};

  cout << "isAlive - " << isAlive << endl;
  cout << "level - " << level << endl;
  cout << "name - " << name << endl;
  return 0;
}