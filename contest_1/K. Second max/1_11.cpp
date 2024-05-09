#include <iostream>

int main() {
  int n, max1 = 0, max2 = 0;
  std::cin >> n;

  while (n != 0) {
    if (n > max1) {
      max2 = max1;
      max1 = n;
    } else if (n > max2) {
      max2 = n;
    }
    std::cin >> n;
  }
  std::cout << max2;
  return 0;
}