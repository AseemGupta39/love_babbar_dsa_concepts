#include <iostream>
// #include <vector>
using namespace std;

char toLowerCase(char ch) {
  if (ch >= 'a' && ch <= 'z') {
    return ch;
  } else {
    return ch - 'A' + 'a';
  }
}

void reverse(char arr[], int n) {
  int s = 0;
  n--;
  while (s < n) {
    swap(arr[s++], arr[n--]);
  }
}

int getLength(char arr[]) {
  int i = 0;
  while (arr[i] != '\0') {
    i++;
  }
  return i;
}

int main() {
  cout << "program started\n";

  char name[20];

  cout << "Enter your name: ";
  cin >> name;

  cout << "Your name is " << name << "\n";

  cout << "Length of name is: " << getLength(name) << "\n";
  reverse(name, getLength(name));
  cout << "Your reverse name is " << name << "\n";
  for (char i : name) {
    toLowerCase(i);
    cout << i;
  }
  cout << "\nprogram ended\n";
  return 0;
}
