#include <iostream>
using namespace std;

int main() {

  int number, Reversed = 0, remainder;

  cout << "Enter an integer: ";
  cin >> number;

  while(number != 0) {
    remainder = number % 10;
    Reversed = Reversed * 10 + remainder;
    number /= 10;
  }

  cout << "Reversed Number = " << Reversed;

  return 0;
}