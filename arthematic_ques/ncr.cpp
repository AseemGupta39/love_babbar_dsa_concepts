#include <iostream>
using namespace std;

int ncr(int n, int r) {
  if (r == 0) {
    return 1;
  }
  int num = 1, din = 1, i, mini = min(r, n - r);
  for (i = 1; i <= mini; i++) {
    num *= n--;
    din *= i;
  }
  return num / din;
}

int main() {
  cout << "program started\n";

  int n, r;
  cin >> n >> r;

  cout << ncr(n, r);

  cout << "\nprogram ended\n";
  return 0;
}
