#include <iostream>

int main() {
  int n;
  std::cin >> n;

  // handling exceptions
  if (n == 1) {
    std::cout << 1;
    return 0;
  }
  if (n == 3) {
    std::cout << "111\n001\n111";
    return 0;
  }

  int newn = n;

  // creating array
  int **arr = new int *[n];
  for (int i = 0; i < n; ++i) {
    arr[i] = new int[n]{};
    if (i == 0) {
      for (int j = 0; j < n; ++j) {
        arr[i][j] = 1;
      }
    }
  }

  // main logic
  int start1 = 0, n1 = n - 1;
  while (newn != 3) {
    for (int i = start1; i < newn; ++i) {
      arr[i][n1] = 1;
      arr[n1][i] = 1;
    }
    n1 -= 2;
    start1 += 2;
    newn -= 2;
  }

  int start2 = 2, n2 = 0;
  newn = n;
  int start3 = 0, n3 = 2;
  while (newn != 3) {
    for (int i = start2; i < newn; ++i) {
      arr[i][n2] = 1;
    }
    n2 += 2;
    start2 += 2;
    for (int i = start3; i < newn - 2; ++i) {
      arr[n3][i] = 1;
    }
    n3 += 2;
    start3 += 2;
    newn -= 2;
  }

  // output
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cout << arr[i][j];
    }
    std::cout << "\n";
  }

  // deleting arrays
  for (int i = 0; i < n; ++i) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
