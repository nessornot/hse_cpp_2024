#include <iostream>

int main() {
  int n = 1, m = 1;
  std::cin >> n >> m;
  int **arr = new int *[n];
  for (int i = 0; i < n; ++i) {
    arr[i] = new int[m];
    for (int j = 0; j < m; ++j) {
      if (i == 0 || j == 0) {
        arr[i][j] = 1;
        std::cout << arr[i][j] << " ";
        continue;
      }
      arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
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
