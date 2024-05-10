#include <iostream>

bool IsDigit(unsigned char);

int main() {
  unsigned char c;
  std::cin >> c;
  if (IsDigit(c) == 0) {
    std::cout << "no";
    return 0;
  }
  std::cout << "yes";
  return 0;
}

bool IsDigit(unsigned char c) {
  int num = c - '0' + 48;
  return num >= 48 && num <= 57;
}