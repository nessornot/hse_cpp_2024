#include <cmath>
#include <iostream>

int main() {
  int a, b, c, d;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::cin >> d;
  if (a == 0 || b == 0) {
    std::cout << "INF";
  } else if (b * c == a * d) {
    std::cout << "NO";
  } else if (b % a == 0) {
    std::cout << -b / a;
  } else {
    std::cout << "NO";
  }
}