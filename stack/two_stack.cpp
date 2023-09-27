#include <iostream>
using std::cout;
using std::cin;
class TwoStack {
    int* arr;
    int top1;
    int top2;
    int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(top2-top1 > 1){
            arr[top1++] = num;
        }
        else{
            cout << "no space left to push";
        }
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(top1-top2 > 1){
            arr[top2--] = num;
        }
        else{
            cout << "no space left to push";
        }
    }

    // Pop from stack 1 and return popped element.
    inline int pop1() {
        return (top1>=0)?arr[top1--]:-1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        return (top2<size)?arr[top2++]:-1;
    }
};

int main(){
    
    return 0;
}