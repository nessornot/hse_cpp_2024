#include <iostream>

int main() {
  int k;
  std::cin >> k;

  int s = 0;
  for (int i = 0; i < k; ++i) {
    int num;
    std::cin >> num;
    s += num;
  }
  std::cout << s;
  return 0;
}