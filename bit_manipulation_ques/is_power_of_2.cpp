#include <iostream>
using namespace std;

bool is_power_of_2(int n) { return ((n > 0) && ((n & n - 1) == 0)); }

int main() {
  cout << "program started\n";

  int n;
  cin >> n;

  cout << is_power_of_2(n);

  cout << "\nprogram ended\n";
  return 0;
}
