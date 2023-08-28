class Solution {
public:
    string removeOccurrences(string s, string part) {
        int j,n = part.length();
        while (s.length()!=0){
            j = s.find(part);
            if(j!=string::npos){
               s.erase(j,n);
            }
            else{
                break;
            }
        }   
        return s;
    }
};