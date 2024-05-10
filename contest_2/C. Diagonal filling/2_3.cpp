#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  int** ms = new int*[n];
  for (int i = 0; i < n; i++) {
    ms[i] = new int[m];
  }
  int k = 0;
  for (int j = 0; j < m; ++j) {
    for (int i = 0; i < n; ++i) {
      if (j - i < 0) {
        break;
      }
      ms[i][j - i] = k;
      k++;
    }
  }
  for (int i = 1; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (i + j > n - 1) {
        break;
      }
      ms[i + j][m - j - 1] = k;
      k++;
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      std::cout << ms[i][j] << " ";
    }
    std::cout << "\n";
  }

  for (int i = 0; i < n; i++) {
    delete[] ms[i];
  }
  delete[] ms;
  return 0;
}