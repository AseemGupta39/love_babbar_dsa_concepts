#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::string;
using std::vector;


class Solution {
private:
    string mapping[10] = {"","","abc","def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void solve(string &digits, string &output, int index, vector<string> &ans,string mapping[]){
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }

        int arr_index = digits[index] - '0';
        string value = mapping[arr_index];

        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits, output, index+1, ans,mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string &digits) {
        vector<string> ans;
        if(digits.length() == 0){
            return ans;
        }
        string output;

        int index = 0;

         solve(digits,output,index,ans, mapping );
        return ans;
    }
};


int main() {
  cout << "program started\n";
    Solution s;
    string test;
    cout << "Enter the value of the test case: ";
    cin >> test;
    for(string str: s.letterCombinations(test)){
        // cout<<str<<" ";
        printf("%s ",str.c_str());
    }
    cout << "\n";
        
  cout << "\nprogram ended\n"; 
  return 0;
}