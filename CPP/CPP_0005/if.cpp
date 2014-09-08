#include <iostream>

using namespace std;

int main() {
  cout << "IF Conditions";
  cout << "\n\n";

  int x = 3;
  int y = 4;

  if(x > 2 && y < 5) {
    cout << "Bedingung ist erfüllt";
  } else if (y > 5) {
    cout << "Bedingung ist anders erfüllt";
  } else {
    cout << "Bedingung ist nicht erfüllt"; 
  }

  cout << "\n\n\n";
  return 0;
}