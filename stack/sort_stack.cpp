#include <iostream>
#include <stack>

using std::cin;
using std::cout;
using std::stack;

void sorted_insert(stack<int> &stack, int &ele) {
  if (stack.empty() || (!stack.empty() && stack.top() < ele)) {
    stack.push(ele);
    return;
  }

  int num = stack.top();
  stack.pop();

  sorted_insert(stack, ele);
  stack.push(num);
}

void sort_stack(stack<int> &stack) {
  if (stack.empty()) {
    return;
  }

  int num = stack.top();
  stack.pop();

  sort_stack(stack);

  sorted_insert(stack, num);
}

int main() {
  cout << "program started\n";

  stack<int> mystack;
  mystack.push(10);
  mystack.push(9);
  mystack.push(8);

sort_stack(mystack);
    
  while (!mystack.empty()) {
    cout << mystack.top() << " ";
    mystack.pop();
  }

  // while (!mystack.empty()) {
  //   cout << mystack.top() << " ";
  //   mystack.pop();
  // }

  cout << "\nprogram ended\n";
  return 0;
}
