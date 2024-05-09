#include <iostream>

int main() {
  int a, b;
  std::cin >> a;
  std::cin >> b;
  for (int i = a; i < b + 1; ++i) {
    if (i % 2 == 0) {
      std::cout << i << " ";
    }
  }
}