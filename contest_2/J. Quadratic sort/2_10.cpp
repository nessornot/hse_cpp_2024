#include <iostream>

void Sort(int *, int *);

int main() {
  int n;
  std::cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; ++i) {
    int elem;
    std::cin >> elem;
    arr[i] = elem;
  }

  Sort(&arr[0], &arr[n - 1]);
  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << " ";
  }

  delete[] arr;
  return 0;
}

void Sort(int *begin, int *end) {
  for (int i = 0; i < end - begin; ++i) {
    for (int *j = begin; j < end; j += 0x1) {
      if (*j > *(j + 0x1)) {
        int temp = *j;
        *j = *(j + 0x1);
        *(j + 0x1) = temp;
      }
    }
  }
}
