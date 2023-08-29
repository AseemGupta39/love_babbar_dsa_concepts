#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverse_word(vector<char> &s) {
  int i, j = 0, n = s.size();
  for (i = 0; i < n; i++) {
    if (s[i] == ' ') {
      reverse(s.begin() + j, s.begin() + i);
      j = i + 1;
    }
  }
  reverse(s.begin() + j, s.end());
}

int main() {
  cout << "program started\n";

  vector<char> v = {'m', 'y', ' ', 'n', 'a', 'm', 'e', ' ',
                    'i', 's', ' ', 'l', 'o', 'v', 'e'};

  for (char i : v) {
    cout << i;
  }
  cout << "\n";
  reverse_word(v);

  for (char i : v) {
    cout << i;
  }

  cout << "\nprogram ended\n";
  return 0;
}
