#include <iostream>
#include <stack>
using namespace std;



int main() {
  cout << "program started\n";

    string str;
    cin >> str;
    
    stack<char> st;
    for(char c:str){
        st.push(c);
    }
    str.clear();
    while(!st.empty()){
        str.push_back(st.top());
        st.pop();
    }
    cout << str;
  
    
  cout << "\nprogram ended\n";
  return 0;
}
