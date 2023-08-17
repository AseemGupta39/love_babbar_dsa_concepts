#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<int> temp(2,-1);
    vector<vector<int>> ans;

    int i,j,n=arr.size();
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j] == s){
                temp[0] = min(arr[i],arr[j]);
                temp[1] = max(arr[i],arr[j]);
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}


int main() {
  cout << "program started\n";
    vector<int> arr = {1,2,3,4,5};
    arr = {2 ,-3, 3, 3 ,-2};
    vector<vector<int>> ans = pairSum(arr, 0);

    for(auto i:ans){
        for(auto j:i){
            cout << j << " ";
        }
        cout << "\n";
    }

  cout << "\nprogram ended\n";
  return 0;
}
