#include <iostream>
using namespace std;

int get_com(int n) {
  if (n == 0) {
    return 1;
  }
  int m = n, mask = 0;

  while (m != 0) {
    mask = (mask << 1) | 1;
    m = m >> 1;
  }
  return ((~n) & mask);
}

int main() {
  cout << "program started\n";
  int n;
  cin >> n;
  cout << get_com(n);
  cout << "\nprogram ended\n";
  return 0;
}
