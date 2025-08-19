#include <iostream>
using namespace std;

int main() {
  // compound assignment
  int value{5};
  value += 5;
  value *= 10;
  value /= 5;
  cout << "value is " << value << endl;

  // long numbers
  int long_number = 100'000'000;
  cout << "long_number is " << long_number << endl;

  // negative numbers
  int a{-10}, b{-5}, c{15};
  int sum = a + b + c;
  cout << "sum of a + b + c is " << sum << endl;

  // integer division
  int idiv = 5 / 2;
  cout << "integer division: 5 / 2 is " << idiv << endl;

  // float division
  float fdiv = 5 / 2.0;
  float half = 1 / 2;
  cout << "float division: 5 / 2.0 is " << fdiv << endl;
  cout << "float division: 1 / 2 is " << half << endl;

  return 0;
}