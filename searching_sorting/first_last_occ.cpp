#include <iostream>
using namespace std;

int first_occ(int arr[], int n, int x) {
  int low = 0, high = n - 1, mid, ans = -1;
  while (high >= low) {
    mid = low + (high - low) / 2;
    if (arr[mid] == x) {
      ans = mid;
      high = mid - 1;
    } else if (arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}

int last_occ(int arr[], int n, int x) {
  int low = 0, high = n - 1, mid, ans = -1;
  while (high >= low) {
    mid = low + (high - low) / 2;
    if (arr[mid] == x) {
      ans = mid;
      low = mid + 1;
    } else if (arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}

int main() {
  cout << "program started\n";
  int arr[] = {3, 4, 4, 4, 8, 9};
  int n = 6;
  int x = 4;
  cout << first_occ(arr, n, x) << "\n";
  cout << last_occ(arr, n, x) << "\n";
  cout << "\nprogram ended\n";
  return 0;
}
