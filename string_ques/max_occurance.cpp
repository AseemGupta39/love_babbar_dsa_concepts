#include <iostream>
#include <string>
using namespace std;

char maxOccurance(string s) {
  int ch[26] = {0};

  int i, n = s.length(), index;
  for (i = 0; i < n; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      index = s[i] - 'a';
    } else {
      index = s[i] - 'A';
    }
    ch[index]++;
  }
  int maxi = -1, ans;
  for (i = 0; i < 26; i++) {
    if (maxi < ch[i]) {
      ans = i;
      maxi = ch[i];
    }
  }
  return 'a' + ans;
}

int main() {
  cout << "program started\n";

  char name[100];

  cout << "Enter your name: ";
  cin >> name;

  cout << "Your name is " << name << "\n";
  cout << maxOccurance(name);
  cout << "\nprogram ended\n";
  return 0;
}
