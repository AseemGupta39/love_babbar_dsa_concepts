#include <iostream>
#include <vector>
using namespace std;

#define len(arr) (sizeof(arr) / sizeof(arr[0]))

void solve(vector<int> &nums, vector<int> temp, int index,
           vector<vector<int>> &ans) {
  if (index >= nums.size()) {
    ans.push_back(temp);
    return;
  }
  // exclude
  solve(nums, temp, index + 1, ans);

  // include
  temp.push_back(nums[index]);
  solve(nums, temp, index + 1, ans);
}
vector<vector<int>> subsets(vector<int> &nums) {
  vector<vector<int>> ans;
  vector<int> temp;
  solve(nums, temp, 0, ans);
  return ans;
}

int main() {
  cout << "program started\n";

  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<vector<int>> ans = subsets(nums);
  for (vector<int> v : ans) {
    for (int i : v) {
      cout << i << " ";
    }
    cout << "\n";
  }

  cout << "\nprogram ended\n";
  return 0;
}
