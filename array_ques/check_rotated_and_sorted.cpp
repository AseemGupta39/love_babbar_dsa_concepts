class Solution {
public:
    bool check(vector<int>& nums) {
        int i,n = nums.size(),count=0;
        if(n==1){
            return true;
        }

        for(i=1;i<n;i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }

        if(nums[n-1] > nums[0]){
            count++;
        }

        return count <= 1;  
    
    }
};