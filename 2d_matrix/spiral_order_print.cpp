#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
  int row = matrix.size(), col = matrix[0].size();
  int count = 0, total = row * col;
  int starting_row = 0, starting_col = 0, ending_row = row - 1,
      ending_col = col - 1;
  int index;
  vector<int> ans(total);

  while (count < total) {

    for (index = starting_col; count < total && index <= ending_col; index++) {
      ans[count++] = matrix[starting_row][index];
    }
    starting_row++;

    for (index = starting_row; count < total && index <= ending_row; index++) {
      ans[count++] = matrix[index][ending_col];
    }
    ending_col--;

    for (index = ending_col; count < total && index >= starting_col; index--) {
      ans[count++] = matrix[ending_row][index];
    }
    ending_row--;

    for (index = ending_row; count < total && index >= starting_row; index--) {
      ans[count++] = matrix[index][starting_col];
    }
    starting_col++;
  }

  return ans;
}

int main() {
  cout << "program started\n";

  vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};


  for (vector<int> in_v : v) {
    for (int n : in_v) {
      cout << n << " ";
    }
  }

  cout << "\n";

  vector<int> ans = spiralOrder(v);
  for (int n : ans) {
    cout << n << " ";
  }

  cout << "\nprogram ended\n";
  return 0;
}
