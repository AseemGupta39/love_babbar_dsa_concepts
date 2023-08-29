#include <iostream>
#include <string>
using namespace std;

char toLowerCase(char ch) {
  if (ch >= 'a' && ch <= 'z') {
    return ch;
  } else {
    return ch - 'A' + 'a';
  }
}

bool checkPalindrome(string s) {
  int start = 0, end = s.length() - 1;
  while (start <= end) {
    if (toLowerCase(s[start]) != toLowerCase(s[end])) {
      return false;
    } else {
      start++;
      end--;
    }
  }
  return true;
}

int main() {
  cout << "program started\n";

  string test_palin;
  cin >> test_palin;

  cout << test_palin << " is palin -> " << checkPalindrome(test_palin);

  cout << "\nprogram ended\n";
  return 0;
}
