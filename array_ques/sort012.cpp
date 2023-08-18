#include <iostream>
using namespace std;

void print_array(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

void sort01(int *arr, int n) {
  int left = 0, right = n - 1;
  while (left < right) {
    while (arr[left] == 0 && left < right) {
      left++;
    }
    while (arr[right] == 1 && left < right) {
      right--;
    }
    if (left < right) {
      swap(arr[left], arr[right]);
      left++;
      right--;
    }
  }
  print_array(arr, n);
}

void sort012(int *arr, int n) {
  int i, c, count[3] = {0};
  for (i = 0; i < n; i++) {
    count[arr[i]]++;
  }

  c = 0;
  for (i = 0; i < 3; i++) {
    while (count[i]--) {
      arr[c++] = i;
    }
  }

  print_array(arr, n);
}

int main() {
  cout << "program started\n";

  int arr012[] = {0, 1, 1, 0, 2, 1, 0, 2};
  // int arr01[] = {0, 1, 1, 0, 1, 0, 0, 1};
  int arr01[] = {1, 1, 0, 0, 0, 0, 1, 0};

  sort012(arr012, sizeof(arr012) / sizeof(arr012[0]));
  sort01(arr01, sizeof(arr01) / sizeof(arr01[0]));

  cout << "\nprogram ended\n";
  return 0;
}
