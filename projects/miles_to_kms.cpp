#include <iostream>

int main() {
  // get the value of user given miles
  double distance_in_miles = 0.0;
  double distance_in_kms = 0.0;
  std::cout << "Enter the distance in miles: ";
  std::cin >> distance_in_miles;

  // convert them to kms
  distance_in_kms = distance_in_miles * 1.60934;

  // print out the value
  std::cout << distance_in_miles << " miles is " << distance_in_kms << " kms\n";
  return 0;
}