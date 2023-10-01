#include <iostream>
#include <stack>
#include <queue>
// #include <string>
// #include <unordered_map>

using std::cout;
using std::cin;
using std::stack;
using std::queue;

// using std::string;
// using std::unordered_map;



void solve(stack<int>& myStack, int x){
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int ele = myStack.top();
    myStack.pop();
    solve(myStack, x); 
    myStack.push(ele);
}

stack<int> pushAtBottom1(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}

void reverseStack1(stack<int> &stack) {
    
    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();
    reverseStack1(stack);

    pushAtBottom1(stack,num);
}



void reverseStack(stack<int> &stack) {
    
    // if(stack.empty()){
    //     return;
    // }
    // int num = stack.top();
    // reverseStack(stack);
    // stack.pop();
    
    // stack.push(num);
    queue<int> q;
    while(!stack.empty()){
        q.push(stack.top());
        stack.pop();
    }
    while(!q.empty()){
        stack.push(q.front());
        q.pop();
    }
}


int main() {
  cout << "program started\n";

     stack<int> mystack;
    mystack.push(10);
    mystack.push(9);
    mystack.push(8);
    // pushAtBottom(mystack, 7);

    while(!mystack.empty()){
        cout << mystack.top() << " ";
        mystack.pop();
    }

    mystack.push(10);
    mystack.push(9);
    mystack.push(8);

    reverseStack1(mystack);
    
    while(!mystack.empty()){
        cout << mystack.top() << " ";
        mystack.pop();
    }
    
  cout << "\nprogram ended\n";
  return 0;
}

