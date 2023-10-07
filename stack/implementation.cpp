#include <iostream>
#include <list>


using std::list;
using std::cout;
using std::cin;

class Stack{

    public:
        int *arr;
        int top,size;

    Stack(int size){
            this -> size = size; 
            arr = new int[size];
            top = -1;
    }

    void push(int element){
        if(size - top > 1){
            arr[++top] = element; 
        }
        else{
            cout << "stack overflow" << "\n";
        }
    }

    void pop(){
        if(top > -1){
            top --;
        }
        else{
            cout << "stack is empty" << "\n";
        }
    }

    int peek(){
        if (top == -1){
            cout << "stack is empty"<< "\n";
            return -1;
        }
        return arr[top];
    }

    inline bool is_empty(){
        return top==-1;
    }
    
};


class Stack_l{

    public:
        // int top;
        list<int> l;


    void push(int element){
       l.push_back(element);
    }

    void pop(){
        if(l.empty()){
            cout << "already empty\n";
        }
        else{
            l.pop_back();
        }
    }

    int peek(){
        if(l.empty()){
            cout << "list empty\n";
            return -1;
        }
        return l.back();
    }

    inline bool is_empty(){
        return l.empty();
    }
    
};

int main() {
  cout << "program started\n";

    
//   Stack st(5);
//     st.push(20);
//     cout << st.peek() << " ";
//     st.push(70);
//     cout << st.peek() << " ";
//     st.push(40);
//     cout << st.peek() << " ";
//     st.push(64);
//     cout << st.peek() << " ";
//     st.push(80);
//     cout << st.peek() << " ";
//     st.push(98);
//     cout << st.peek() << " ";

//     cout << "\n\n";
//     while(!st.is_empty()){
//         cout << st.peek() << " ";
//         st.pop();
//     }
    
    // Stack_l st;
    // st.push(15);
    // st.push(25);
    // st.push(35);
    // st.push(45);
    // while(!st.is_empty()){
    //     cout << st.peek() << " ";
    //     st.pop();
    // }
    
    
  cout << "\nprogram ended\n";
  return 0;
}
