#include <iostream>

int Nod(int, int);

int main() {
  int n;
  std::cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }
  int gcd = arr[0];
  for (int i = 0; i < n; ++i) {
    gcd = Nod(gcd, arr[i]);
  }
  delete[] arr;
  std::cout << gcd;
  return 0;
}

int Nod(int n1, int n2) {
  return n2 == 0 ? n1 : Nod(n2, n1 % n2);
}
