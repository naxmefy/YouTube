#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
  cout << "Command Line Parameters";
  cout << "\n\n";

  for (int i = 0; i < argc; ++i)
  {
    cout << argv[i] << "\n";
  }

  cout << "\n\n\n";
  return 0;
}