#include <iostream>
using namespace std;


Node* remove_loop(Node* head){
    Node* slow= head;
    Node* fast= head;

    bool flag = 0;

    while(slow!=NULL &&fast!=NULL &&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        cout << "in loop\n";
        if(slow==fast){
            flag =1;
            break;
        }
    }

    if(flag==0){
        return head;
    }
    int count =0;
    while(slow->next!=fast){
       slow = slow->next;
        count++;
    }
    cout << "yaha tak\n";
    Node* ini= head;
    Node* end= head;

    while(count--){
        end = end->next;
    }

    while(end->next!=ini){
        ini = ini->next;
        end = end->next;
    }

    end->next = NULL;
    return head;
}


int main() {
  cout << "program started\n";

    
  cout << "\nprogram ended\n";
  return 0;
}
