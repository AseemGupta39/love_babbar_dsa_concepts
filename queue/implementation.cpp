#include <iostream>

using std::cout;
using std::cin;

class queue{
    int *arr;
    int front,rear;
    int size;

    public:

    queue(int size){
        this->size = size;
        arr = new int[size];
        front = rear = 0;
    }

    inline bool is_empty(){
        return rear == front;
    }

    inline bool is_full(){
        return rear == size;
    }

    inline int peek(){
        return (!is_empty()) ? arr[front] : -1;
    }

    void enqueue(int num){
        if(is_full()){
            cout << "queue is full\n";
            return;
        }
        arr[rear++] = num;
    }

    void dequeue(){
        if(is_empty()){
            cout << "queue is empty\n";
            return;
        }
        
        arr[front++] = -1;
        if(is_empty()){
            front = rear = 0; 
        }
    }

    void print(){
        if(is_empty()){
            cout << "queue is empty\n";
            return;
        }
        int i;
        for(i=front;i<rear;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

};


int main() {
  cout << "program started\n";
    queue* q = new queue(5);

    q->print();
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->enqueue(40);
    q->enqueue(50);
    q->enqueue(60);

    q->print();
    

  cout << "\nprogram ended\n";
  return 0;
}
