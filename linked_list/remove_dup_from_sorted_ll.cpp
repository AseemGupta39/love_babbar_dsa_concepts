#include <iostream>
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

Node* remove_dup(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* to_be_del = temp->next;
            temp->next = temp->next->next;
            delete(to_be_del);
            continue;
        }
        temp = temp->next;
    }
    return head;
    }


int main() {
  cout << "program started\n";
 Node* head = NULL;
    head = insert_at_last(head, 1);
    head = insert_at_last(head, 1);
    head = insert_at_last(head, 2);
    head = insert_at_last(head, 2);
    head = insert_at_last(head, 2);
    head = insert_at_last(head, 2);
    head = insert_at_last(head, 3);
    head = insert_at_last(head, 3);
    head = insert_at_last(head, 4);
    head = insert_at_last(head, 5);
    head = remove_dup(head);
    
    print_ll(head);
    
  cout << "\nprogram ended\n";
  return 0;
}
