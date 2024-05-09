#include <iostream>

int main() {
  int n, m, k;
  std::cin >> n;
  std::cin >> m;
  std::cin >> k;
  if ((k % n == 0 || k % m == 0) && (k <= m * n)) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
  return 0;
}