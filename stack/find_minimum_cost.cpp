#include <iostream>
#include <stack>
#include <string>

using std::cin;
using std::cout;
using std::stack;
using std::string;


int findMinimumCost(string &str) {

    if(str.length()%2){
        return -1;
    }
    int open=0,close=0;
    stack<char> st;
    for(char ch:str){
        if(ch=='{'){
            st.push(ch);
        }
        else{
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
               st.push(ch); 
            }
        }
    }
    
    while(!st.empty()){
        if(st.top()=='{'){
            open++;
        }    
        else{
            close++;    
        }
        st.pop();
    }

    return ((open+1)>>1) + ((close+1)>>1);
    // return ((open+1)/2) + ((close+1)/2);
}



int main() {
  cout << "program started\n";

    string s;
    cin >> s;

    cout << findMinimumCost(s);


  cout << "\nprogram ended\n";
  return 0;
}
