static const int __ = []() { std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL); return 0; }();

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> m;
        for(int i:arr){
            m[i]+=1;
        }
        set<int> s;
        for(auto i:m){
            s.insert(i.second);
        }
        if(s.size()!=m.size()){
            return false;
        }
        return true;
    }
};