#include <iostream>

int main() {
  int a;
  std::cin >> a;
  if (a % 2 == 0) {
    std::cout << a + 2;
  } else {
    std::cout << a + 1;
  }
}