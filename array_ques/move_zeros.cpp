static const int __ = []() { std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL); return 0; }();

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,non_zero=0,n = nums.size();
        for(i=0;i<n;i++){
            if(nums[i] != 0){
                swap(nums[i],nums[non_zero++]);
            }
        }        
    }
};