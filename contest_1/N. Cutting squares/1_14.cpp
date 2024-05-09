#include <iostream>

int main() {
  int a, b, k = 1;
  std::cin >> a;
  std::cin >> b;
  if (a == 1) {
    std::cout << b;
    return 0;
  }
  if (b == 1) {
    std::cout << a;
    return 0;
  }
  while (a != b) {
    if (a > b) {
      a -= b;
    } else {
      b -= a;
    }
    ++k;
  }
  std::cout << k;
  return 0;
}