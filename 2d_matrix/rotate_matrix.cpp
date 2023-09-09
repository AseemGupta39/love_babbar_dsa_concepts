#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int i,j,n = matrix.size();
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }

int main() {
  cout << "program started\n";

  // vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12},{13,14,15,16}};

  for (vector<int> in_v : v) {
    for (int n : in_v) {
      cout << n << " ";
    }
    cout << "\n";
  }

  cout << "\n";

  rotate(v);

  for (vector<int> in_v : v) {
    for (int n : in_v) {
      cout << n << " ";
    }
    cout << "\n";
  }

  // vector<int> ans = spiralOrder(v);
  // for (int n : ans) {
  //   cout << n << " ";
  // }

  cout << "\nprogram ended\n";
  return 0;
}
