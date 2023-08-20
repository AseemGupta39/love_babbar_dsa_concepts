#include <iostream>
#include <vector>
using namespace std;

int find_pivot(vector<int> &arr, int n) {
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

int binary_search(vector<int> &arr, int s, int e, int x) {
  int low = s, high = e, mid;
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

int search(vector<int> &arr, int n, int target) {
  int pivot = find_pivot(arr, n);
  if (target >= arr[pivot] && target <= arr[n - 1]) {
    return binary_search(arr, pivot, n - 1, target);
  } else {
    return binary_search(arr, 0, pivot - 1, target);
  }
}

int main() {
  cout << "program started\n";
  vector<int> v = {7, 9, 1, 2, 3};
  int target;
  cin >> target;
  cout << search(v, v.size(), target);
  cout << "\nprogram ended\n";
  return 0;
}
