// govnocode warning
#include <iostream>
#include <cmath>

int Nod(int, int);

int main() {
  int a, b, flag = 0, nodnum = 1;
  std::cin >> a;
  std::cin >> b;
  if (a < 0 && b > 0) {
    nodnum = Nod(abs(a), b);
    flag = 1;
  } else if (b < 0 && a > 0) {
    nodnum = Nod(a, abs(b));
    flag = 2;
  } else if (a < 0 && b < 0) {
    nodnum = Nod(abs(a), abs(b));
    flag = 3;
  } else {
    nodnum = Nod(a, b);
  }
  switch (flag) {
    case 0:
      std::cout << a / nodnum << " " << b / nodnum;
      break;
    case 1:
      std::cout << "-" << abs(a) / nodnum << " " << b / nodnum;
      break;
    case 2:
      std::cout << a / nodnum << " -" << abs(b) / nodnum;
      break;
    case 3:
      std::cout << "-" << abs(a) / nodnum << " -" << abs(b) / nodnum;
  }
  return 0;
}

int Nod(int n1, int n2) {
  if (n2 == 0) {
    return n1;
  }
  return Nod(n2, n1 % n2);
}