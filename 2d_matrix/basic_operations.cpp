#include <climits>
#include <iostream>
using namespace std;

void print_row_sum(int mat[][3]) {
  int row, col, sum;
  cout << "row sum\n";
  for (row = 0; row < 3; row++) {
    sum = 0;
    for (col = 0; col < 3; col++) {
      sum += mat[row][col];
    }
    cout << sum << " ";
  }
  cout << "\n";
}

void largest_row_sum(int mat[][3]) {
  int row, col, sum, maxi = INT_MIN, r;
  for (row = 0; row < 3; row++) {
    sum = 0;
    for (col = 0; col < 3; col++) {
      sum += mat[row][col];
    }
    if (maxi < sum) {
      maxi = sum;
      r = row;
    }
  }
  cout << "the maximum sum of all rows is " << maxi << " of row " << r + 1;
  cout << "\n";
}

void print_col_sum(int mat[][3]) {
  int row, col, sum;
  cout << "col sum\n";
  for (row = 0; row < 3; row++) {
    sum = 0;
    for (col = 0; col < 3; col++) {
      sum += mat[col][row];
    }
    cout << sum << " ";
  }
  cout << "\n";
}

int main() {
  cout << "program started\n";

  int i = 3, j = 3;
  int row, col;
  // cout << "enter row and col: \n";
  // cin >> i >> j;
  int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  // for(row=0;row<i;row++){
  //     for(col=0;col<j;col++){
  //         cin >> mat[row][col];
  //     }
  // }

  // printing
  for (row = 0; row < i; row++) {
    for (col = 0; col < j; col++) {
      cout << mat[row][col] << " ";
    }
    cout << "\n";
  }

  print_row_sum(mat);
  largest_row_sum(mat);
  print_col_sum(mat);

  cout << "\nprogram ended\n";
  return 0;
}
