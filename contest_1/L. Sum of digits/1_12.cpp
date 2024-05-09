#include <iostream>

int main() {
  int64_t a;
  std::cin >> a;
  int64_t s = 0;
  while (a > 0) {
    s += a % 10;
    a /= 10;
  }
  std::cout << s;
  return 0;
}