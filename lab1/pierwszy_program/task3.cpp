#include <iostream>

/*
 * Stwórz program, który wyświetli różne typy danych:
 * int, float, char, oraz bool.
 * Zainicjuj zmienne tymi typami i wyświetl ich wartości.
 */

int main() {
  int a = 5;
  float b = 3.14;
  char c = 'A';
  bool d = true;

  std::cout << "Zmienna calkowita: " << a << std::endl;
  std::cout << "Zmienna zmiennoprzecinkowa: " << b << std::endl;
  std::cout << "Zmienna znakowa: " << c << std::endl;
  std::cout << std::boolalpha;
  std::cout << "Zmienna logiczna: " << d << std::endl;
  std::cout << std::noboolalpha;

  return 0;
}
