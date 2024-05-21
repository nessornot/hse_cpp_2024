#include <iostream>

int Cinema(std::string data);

bool ContainsOne(std::string data);

int main() {
  std::cout << Cinema("00010001") << "\n"; // 0
  std::cout << Cinema("10000001") << "\n"; // 3
  std::cout << Cinema("00011") << "\n"; // 0
  std::cout << Cinema("11000") << "\n"; // 4
  std::cout << Cinema("111000011000") << "\n"; // 11
  std::cout << Cinema("1110000011000") << "\n"; // 5
  std::cout << Cinema("000100001") << "\n"; // 11
  return 0;
}

int Cinema(std::string data) {
  // if string contains only zeros
  if (!ContainsOne(data)) { return 0; }

  // other cases
  int max_space = -1;
  int space = 0;
  int index = 0;
  for (int i = 0; i < data.length(); ++i) {
    if (data[i] == '1') {
      if (max_space < space) {
        max_space = space;
        // checking if order of zeros has '1' in the start
        if (i - max_space != 0) {
          index = i - max_space / 2 - 1;
        } else {
          index = 0;
        }
      }
      space = 0;
      continue;
    }
    ++space;
  }

  // checking if order doesnt have '1' at the end
  if (space + 1 >= max_space) {
    return data.length() - 1;
  }
  return index;
}

// checking if string contains '1'
bool ContainsOne(std::string data) {
  for (int i = 0; i < data.length(); ++i) {
    if (data[i] == '1') {
      return true;
    }
  }
  return false;
}
