#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int x) {
  int low = 0, high = n - 1, mid;
  while (high >= low) {
    mid = low + (high - low) / 2;
    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  cout << "program started\n";
  int arr[] = {3, 4, 6, 7, 8, 9};
  int n = 6;
  int x = 6;
  cout << binary_search(arr, n, x);
  cout << "\nprogram ended\n";
  return 0;
}
