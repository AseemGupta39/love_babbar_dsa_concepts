#include <iostream>
using namespace std;

void print(int arr[], int &s, int &e) {
  cout << "\nsize of array is " << e - s << "\n";
  for (int i = s; i < e; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int binary_search(int arr[], int low, int high, int target) {
  print(arr, low, high);
  if (high < low) {
    return -1;
  }
  int mid = low + (high - low) / 2;
  if (arr[mid] == target) {
    return mid;
  }
  if (arr[mid] < target) {
    return binary_search(arr, mid + 1, high, target);
  } else {
    return binary_search(arr, low, mid - 1, target);
  }
}

int main() {
  cout << "program started\n";

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n;
  cin >> n;

  cout << "\n";
  cout << binary_search(arr, 0, sizeof(arr) / sizeof(arr[0]), n);

  cout << "\nprogram ended\n";
  return 0;
}
