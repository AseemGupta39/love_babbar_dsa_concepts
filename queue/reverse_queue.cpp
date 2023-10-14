#include <iostream>
#include "implementation.cpp"
using std::cout;
using std::cin;

void reverse_queue(queue* &q){
    if(q->is_empty()){
        return ;
    }
    int ele = q->peek();
    q->dequeue();
    reverse_queue(q);
    q->enqueue(ele);
}


int main() {
  cout << "program started\n";

    queue *q = new queue(5);
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->enqueue(40);
    q->enqueue(50);
    q->print();
    reverse_queue(q);
    q->print();
        
  cout << "\nprogram ended\n"; 
  return 0;
}