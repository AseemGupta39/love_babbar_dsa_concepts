#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
  int row, col, count = 0;
  vector<int> ans((nRows * mCols));
  for (col = 0; col < mCols; col++) {
    if (col & 1) {
      for (row = 0; row < nRows; row++) {
        ans[count++] = arr[nRows - row - 1][col];
      }
    } else {
      for (row = 0; row < nRows; row++) {
        ans[count++] = arr[row][col];
      }
    }
  }
  return ans;
}

int main() {
  cout << "program started\n";

  // vector<vector<int>> v = {{1, 2, 3, 4},{5 ,6 ,7 ,8},{9 ,10, 11 ,12}};
  vector<vector<int>> v = {
      {1, 2, 4, 5}, {3, 6, 8, 10}, {11, 12, 13, 15}, {16, 14, 9, 7}};
  vector<int> ans = wavePrint(v, v.size(), v[0].size());

  for (vector<int> in_v : v) {
    for (int n : in_v) {
      cout << n << " ";
    }
  }

  cout << "\n";

  for (int n : ans) {
    cout << n << " ";
  }

  cout << "\nprogram ended\n";
  return 0;
}
