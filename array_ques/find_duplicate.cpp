#include <iostream>
using namespace std;

int find_duplicate(int arr[], int n) {
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans ^= arr[i];
  }
  for (int i = 1; i < n; i++) {
    ans ^= i;
  }
  return ans;
}

int main() {
  cout << "program started\n";

  int arr[] = {1, 2, 3, 4, 5, 6, 3, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << find_duplicate(arr, n);

  cout << "\nprogram ended\n";
  return 0;
}
