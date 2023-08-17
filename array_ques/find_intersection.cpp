#include <iostream>
#include <vector>
using namespace std;


vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2,int m) {
  vector<int> res;
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (arr1[i] == arr2[j]) {
      if (!res.empty()) {
        if (res[res.size() - 1] != arr1[i]) {
          res.push_back(arr1[i]);
        }
      } else {
        res.push_back(arr1[i]);
      }

      i++;
      j++;
    } else if (arr1[i] > arr2[j]) {
      j++;
    } else {
      i++;
    }
  }
  return res;
}

int main() {
  cout << "program started\n";

  vector<int> arr1, arr2;
  vector<int> res;

  arr1 = {1, 2, 2, 2, 3, 4};
  arr2 = {2, 2, 3, 3};

  res = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

  for (int i : res) {
    cout << i << " ";
  }

  cout << "\nprogram ended\n";
  return 0;
}
