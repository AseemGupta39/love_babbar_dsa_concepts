static const int __ = []() { std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL); return 0; }();

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        unordered_map<int,int> m;
        vector<int> v;
        for(int i:nums){
            m[i]+=1;
        }
        for(auto i:m){
            if(i.second==2){
                v.push_back(i.first);
            }
        }
        return v;
    }
};