#include <iostream>
#include <stack>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::stack;
using std::vector;

void print_stack(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}


vector<int> nextGreaterElement(vector<int> &arr, int &n)
{
    stack<int> st;
    vector<int> ans(n);
    int i,curr;
    for(i=n-1;i>=0;i--){
        curr = arr[i];
    
        
        while(!st.empty() && st.top()<=curr){
            st.pop();
        }

        ans[i] = (st.empty()) ? -1 : st.top();
    
        st.push(curr);
        
    }

    return ans;
}


int main() {
  cout << "program started\n";
    
    int n ;
    cin >> n;
    
    vector<int> inp(n);
    
    for(int &i:inp){
        cin >> i;
    }


    for(int i:nextGreaterElement(inp,n)){
        cout << i << " ";
    }

  cout << "\nprogram ended\n";
  return 0;
}


