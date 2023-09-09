#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();
        int start = 0,end = row*col-1,mid,element;
        
        while(start<=end){
            mid = start + (end-start)/2;
            element = matrix[mid/col][mid%col];
            if(element == target){
                return true;
            }
            if(element<target){
                start = mid + 1;
            }
            else{
                end = mid-1;
            }
        }
    return false;
    }

int main() {
  cout << "program started\n";

  // vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12},{13,14,15,16}};

  

  cout << "\nprogram ended\n";
  return 0;
}
