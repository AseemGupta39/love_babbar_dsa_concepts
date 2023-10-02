#include <iostream>
#include <stack>
#include <string>

using std::cin;
using std::cout;
using std::stack;
using std::string;

inline bool is_op(char &ch){
    return (ch=='+' || ch=='-' || ch=='*' || ch=='/')?true:false;
}

inline bool is_alpha(char &ch){
    return (ch>='a' &&  ch<='z' )?true:false;
}


bool redundant_brackets(string &s){
     stack<char> st;
    for(char ch:s){
        if(ch == '(' || is_op(ch)){
            st.push(ch);
        }
        else if(isalpha(ch)){
            continue;
        }
        else if(!st.empty() && is_op(st.top())){
            while(!st.empty() && is_op(st.top())){
                st.pop();
            }
            st.pop();
        }
        else{
            return true;
        }
    }
    return false;
}


int main() {
  cout << "program started\n";

    string s;
    cin >> s;
    
    if(redundant_brackets(s)){
        cout << "yes";
    }
    else{
        cout << "no";
    }
  // stack<int> mystack;
  // mystack.push(10);
  // mystack.push(9);
  // mystack.push(8);


    
  // while (!mystack.empty()) {
  //   cout << mystack.top() << " ";
  //   mystack.pop();
  // }

  // while (!mystack.empty()) {
  //   cout << mystack.top() << " ";
  //   mystack.pop();
  // }

  cout << "\nprogram ended\n";
  return 0;
}
