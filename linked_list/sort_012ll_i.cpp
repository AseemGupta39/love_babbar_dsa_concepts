#include <iostream>
#include <unordered_set>
using namespace std;

class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

Node* insert_at_beg(Node *head,int ele){
    Node* new_node = new Node(ele);
    if(head==NULL){
        head = new_node;
        return head;
    }

    new_node->next = head->next;
    head = new_node;
    return head;
}


Node* insert_at_last(Node *head,int ele){
    Node* new_node = new Node(ele);
    if(head==NULL){
        head = new_node;
        return head;
    }
    if(head -> next == NULL){
        head->next = new_node;
        return head;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = new_node;
    return head;
}

void print_ll(Node* head){
    Node* temp = head;
    if(head==NULL){
        cout << "Empty ll\n";
        return;
    }
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}


// Node* sort_012_ll(Node* head){
//     if(head->next==NULL){
//         return head;
//     }
//     if(head->next->next==NULL){
//         if(head->next->data < head->data){
//             swap(head->next->data,head->data);
//         }
//         return head;
//     }
    
//     Node* back = head;
//     Node* forward =head->next;
//     if(back->data == 2){
//         insert_at_last(head, 2);
        
//     }
//     Node* forward =head->next;
//     while(forward!=NULL){
//         if(forward->data==2){
//             insert_at_last(head, 2);
//         }
//         temp=temp->next;
//     }
// }

void sort_012_ll(Node* head){
    int arr[3] = {0};
    Node* temp = head;
    while(temp!=NULL){
        arr[temp->data]++;
        temp=temp->next;
    }
    temp = head;
    while(arr[0]--){
        temp->data = 0;
        temp = temp->next;
    }
    while(arr[1]--){
        temp->data = 1;
        temp = temp->next;
    }
    while(arr[2]--){
        temp->data = 2;
        temp = temp->next;
    }
}


int main() {
  cout << "program started\n";
 Node* head = NULL;
    head = insert_at_last(head, 1);
    head = insert_at_last(head, 2);
    head = insert_at_last(head, 2);
    head = insert_at_last(head, 2);
    head = insert_at_last(head, 0);
    head = insert_at_last(head, 0);
    head = insert_at_last(head, 1);
    head = insert_at_last(head, 1);
    head = insert_at_last(head, 0);
    head = insert_at_last(head, 0);
    head = insert_at_last(head, 1);

    sort_012_ll(head);

    
    print_ll(head);
    
  cout << "\nprogram ended\n";
  return 0;
}
