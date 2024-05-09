#include <iostream>

int main() {
  int a;
  std::cin >> a;
  for (int i = 2; i < a + 1; ++i) {
    if (a % i == 0) {
      std::cout << i;
      return 0;
    }
  }
  return 0;
}