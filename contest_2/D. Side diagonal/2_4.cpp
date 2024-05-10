#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int **arr = new int *[n];
  for (int i = 0; i < n; ++i) {
    arr[i] = new int[n];
    for (int j = 0; j < n; ++j) {
      if (j + 1 == n - i) {
        arr[i][j] = 1;
      } else if (j + 1 < n - i) {
        arr[i][j] = 0;
      } else {
        arr[i][j] = 2;
      }
      std::cout << arr[i][j] << " ";
    }
    std::cout << "\n";
  }
  for (int i = 0; i < n; ++i) {
    delete[] arr[i];
  }
  delete[] arr;
  return 0;
}
