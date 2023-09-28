#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using std::cout;
using std::cin;
using std::string;
using std::stack;
using std::unordered_map;

class Solution {
    
public:
    

    bool isValid(string &s) {
        stack<char> st;
        
        unordered_map<char, char> umap = {{'{','}'},{'(',')'},{'[',']'}};
        
        // unordered_map<char, char> umap;
        // umap['['] = ']';
        // umap['{'] = '}';
        // umap['('] = ')';

    
    for(char i:s)
    {
        
        if(umap.count(i)){
            st.push(i);
        }
        else if(st.size()!=0 && i==umap[st.top()])
        {
            st.pop();
        }
        else
        {   
            return false;
        }
    }
        return st.size() == 0;  
    }
};


int main() {
  cout << "program started\n";

    Solution* s ;
    string str;
    
    cout << "enter the string: ";
    cin >> str;

    if(s->isValid(str)){
        cout << "\nyes valid";
    }
    else{
        cout << "\nnot valid";
    }

  cout << "\nprogram ended\n";
  return 0;
}

