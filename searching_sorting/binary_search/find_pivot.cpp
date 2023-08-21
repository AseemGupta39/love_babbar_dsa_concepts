#include <iostream>
using namespace std;

int find_pivot(int arr[], int n) {
  int high = n - 1, low = 0, mid;
  while (high > low) {
    mid = low + (high - low) / 2;
    if (arr[mid] >= arr[0]) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }
  return low;
}

int main() {
  cout << "program started\n";
  int arr[] = {7, 9, 1, 2, 3};
  cout << find_pivot(arr, 5);
  cout << "\nprogram ended\n";
  return 0;
}
