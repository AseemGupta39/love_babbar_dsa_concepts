#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m,int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i:arr){
        if(pageSum + i <= mid){
            pageSum+=i;
        }
        else{
            studentCount+=1;
            if(studentCount > m || i > mid){
                return false;
            }
            pageSum=0;
            pageSum=i;
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
  int s = 0, sum = 0, i, e;
  for (int i : arr) {
    sum += i;
  }
  e = sum;
  int ans, mid = s + (e - s) / 2;

  while (s <= e) {
    if (isPossible(arr, n, m, mid)) {
      ans = mid;
      e = mid - 1;
    } else {
      s = mid + 1;
    }
      mid = s + (e-s)/2;
  }
    return ans;
}

int main() {
  cout << "program started\n";

  cout << "\nprogram ended\n";
  return 0;
}
