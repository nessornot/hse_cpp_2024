#include <iostream>

bool Palindrom(std::string data);

int main() {
  std::cout << Palindrom("some text") << "\n"; // 0
  std::cout << Palindrom("abcdcba") << "\n"; // 1
  std::cout << Palindrom("a    bcb a") << "\n"; // 1
  std::cout << Palindrom("a bcb    a") << "\n"; // 1
  return 0;
}

bool Palindrom(std::string data) {
  // removing all spaces (' ') from input string
  std::string data_nospace = "";
  for (int i = 0; i < data.length(); ++i) {
    if (data[i] != ' ') {
      data_nospace += data[i];
    }
  }

  // making reversed string using input data without spaces
  std::string data_reversed = "";
  for (int i = data_nospace.length() - 1; i >= 0; --i) {
    data_reversed += data_nospace[i];
  }

  // checking if its equal
  return data_nospace == data_reversed;
}
