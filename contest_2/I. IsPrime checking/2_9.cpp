#include <iostream>

int main() {
  int64_t n;
  std::cin >> n;
  if (n <= 3) {
    std::cout << "prime";
    return 0;
  }
  if (n % 2 == 0 || n % 3 == 0) {
    std::cout << "composite";
    return 0;
  }
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      std::cout << "composite";
      return 0;
    }
  }
  std::cout << "prime";
  return 0;
}