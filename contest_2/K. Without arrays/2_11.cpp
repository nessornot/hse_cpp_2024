#include <iostream>

void Func(int);

int k = 0;
std::string rez;

int main() {
  int n;
  std::cin >> n;
  Func(n);
  std::cout << rez;
  return 0;
}

void Func(int num) {
  if (k == num) {
    return;
  }
  int input;
  std::cin >> input;
  rez = std::to_string(input) + " " + rez;
  ++k;
  Func(num);
}
