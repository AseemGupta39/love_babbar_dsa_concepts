#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target) {
  int row = matrix.size(), col = matrix[0].size();

  int row_index = 0, col_index = col - 1, element;

  while (row_index < row && col_index >= 0) {
    element = matrix[row_index][col_index];

    if (element == target) {
      return true;
    }
    if (element < target) {
      row_index++;
    } else {
      col_index--;
    }
  }
  return false;
}

int main() {
  cout << "program started\n";

  // vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  vector<vector<int>> v = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  cout << "\nprogram ended\n";
  return 0;
}
