#include <iostream>

int main() {
  int n, n1 = 1, n2 = 1, n3 = 2;
  std::cin >> n;

  if (n == 1) {
    std::cout << 1;
    return 0;
  }
  if (n == 0) {
    std::cout << 0;
    return 0;
  }

  for (int i = 0; i < n - 2; ++i) {
    n3 += n2;
    n2 = n3 - n2;
    n1 = n2 - n1;
  }
  std::cout << n2;
  return 0;
}