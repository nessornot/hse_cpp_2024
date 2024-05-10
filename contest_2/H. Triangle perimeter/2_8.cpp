#include <iostream>
#include <cmath>
#include <iomanip>

double GetLen(int, int, int, int);

int main() {
  int x1, y1, x2, y2, x3, y3;
  std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  std::cout << std::fixed << std::setprecision(6)
            << GetLen(x1, y1, x2, y2) + GetLen(x2, y2, x3, y3) + GetLen(x3, y3, x1, y1);
  return 0;
}

double GetLen(int x1, int y1, int x2, int y2) {
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
