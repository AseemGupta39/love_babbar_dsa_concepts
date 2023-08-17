#include <climits>
#include <iostream>
using namespace std;

int reverse_int(int x) {
  int digit, ans = 0;

  while (x != 0) {
    digit = x % 10;

    if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
      return 0;
    }

    ans = ans * 10 + digit;
    x /= 10;
  }

  return ans;
}

int main() {
  cout << "program started\n";
  int n;
  cin >> n;
  cout << reverse_int(n) << "\n";
  cout << "\nprogram ended\n";
  return 0;
}
