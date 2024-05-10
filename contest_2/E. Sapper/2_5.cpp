#include <iostream>

int main() {
  // reading main variables
  int n, m, w;
  std::cin >> n >> m >> w;
  int **mines = new int *[w];

  // reading mines array
  for (int i = 0; i < w; ++i) {
    mines[i] = new int[2];
    for (int j = 0; j < 2; ++j) {
      int elem;
      std::cin >> elem;
      mines[i][j] = elem;
    }
  }

  // putting mines on field
  char **field = new char *[n];
  for (int i = 0; i < n; ++i) {
    field[i] = new char[m];
    for (int j = 0; j < m; ++j) {
      // isMined checking
      bool is_mined = false;
      for (int z = 0; z < w; ++z) {
        if (i + 1 == mines[z][0] && j + 1 == mines[z][1]) {
          field[i][j] = '*';
          is_mined = true;
          break;
        }
      }
      if (!is_mined) {
        field[i][j] = '0';
      }
    }
  }

  // putting digits on field
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if (field[i][j] != '*') {
        int mines_count = 0;
        mines_count += (i - 1 >= 0 && j - 1 >= 0 && field[i - 1][j - 1] == '*') ? 1 : 0;
        mines_count += (i - 1 >= 0 && field[i - 1][j] == '*') ? 1 : 0;
        mines_count += (i - 1 >= 0 && j + 1 < m && field[i - 1][j + 1] == '*') ? 1 : 0;
        mines_count += (j - 1 >= 0 && field[i][j - 1] == '*') ? 1 : 0;
        mines_count += (j + 1 < m && field[i][j + 1] == '*') ? 1 : 0;
        mines_count += (i + 1 < n && j - 1 >= 0 && field[i + 1][j - 1] == '*') ? 1 : 0;
        mines_count += (i + 1 < n && field[i + 1][j] == '*') ? 1 : 0;
        mines_count += (i + 1 < n && j + 1 < m && field[i + 1][j + 1] == '*') ? 1 : 0;
        field[i][j] = mines_count + '0';
      }
    }
  }

  // field output
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      std::cout << field[i][j] << " ";
    }
    std::cout << "\n";
  }

  // deleting arrays
  for (int i = 0; i < n; ++i) {
    delete[] field[i];
  }
  delete[] field;
  for (int i = 0; i < w; ++i) {
    delete[] mines[i];
  }
  delete[] mines;
  return 0;
}
