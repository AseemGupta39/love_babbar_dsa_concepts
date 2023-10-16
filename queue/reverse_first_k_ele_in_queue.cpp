#include <iostream>
#include<queue>
#include<stack>
#include "implementation.cpp"
// #include <vector>
using std::cout;
using std::cin;
using std::vector;
using std::queue;
using std::stack;



queue<int> modifyQueue(queue<int> &q, int &k) {
    stack<int> st;
    int n = q.size() - k;
    
    while(k--){
        st.push(q.front());
        q.pop();
    }
   
    while(!st.empty()){  
        q.push(st.top());
        st.pop();
    }
    
    while(n--){
        q.push(q.front());
        q.pop();
    }
    
    return q;
}



int main() {
  cout << "program started\n";

    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    print_queue(q);
    
    int k;
    cout << "enter the value of k: ";
    cin >> k;
    
    print_queue(modifyQueue(q, k));

        
  cout << "\nprogram ended\n"; 
  return 0;
}