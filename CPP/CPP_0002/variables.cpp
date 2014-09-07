#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Variablen \n\n\n";

  // Integer (Long) - Ganze Zahlen
  int x = 3;
  cout << "x: " << x << "\n";

  int y = 4;
  cout << "y: " << y << "\n";

  int z = x + y;
  cout << "z: " << z << "\n";

  cout << "\n\n";

  // Float (Double) - Fließkommazahlen
  float f = 3.8234234234;
  cout << "f: " << f << "\n";

  float ergebnis = z+f;

  cout << "z+f: " << ergebnis << "\n";
  cout << "\n\n";

  // Modulo
  int div1 = 6 / 2;
  cout << "div1: " << div1 << "\n";
  int mod1 = 6 % 4;
  cout << "mod1: " << mod1 << "\n";

  cout << "\n\n";
  // ==================
  // Boolean - Boolischer Zustand (Wahr oder Falsch)
  bool zustand = 0;
  cout << "zustand: " << zustand << "\n";
  cout << "\n\n";

  // Character - Zeichen (A, B, C, 0, 1, @)
  char zeichen = 'A';
  cout << "zeichen: " << zeichen << "\n";
  cout << "\n\n";

  // String - Zeichenkette ("Hallo Wer bist du?")
  string hallo = "Hallo";
  cout << "String: " << hallo << "\n";

  cout << "\n\n";
  return 0;
}