#include <iostream>
#include <stack>
// #include <string>
// #include <unordered_map>

using std::cout;
using std::cin;
// using std::string;
using std::stack;
// using std::unordered_map;

  
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> s;
    s.push(x);
    while(!myStack.empty()){
        s.push(myStack.top());
        myStack.pop();
    }
    // myStack.push(x);
    while(!s.empty()){
        myStack.push(s.top());
        s.pop();
    }
    return myStack;
}

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


int main() {
  cout << "program started\n";

     stack<int> mystack;
    mystack.push(10);
    mystack.push(9);
    mystack.push(8);
    pushAtBottom(mystack, 7);

    while(!mystack.empty()){
        cout << mystack.top() << " ";
        mystack.pop();
    }



  cout << "\nprogram ended\n";
  return 0;
}

