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
// ye code sahi nahi hai 
//par sahi copy kiya hai
void insert_at_tail(Node* tail,Node* curr){
    tail->next = curr;
    tail = curr;
}
// ye mera code hai 
// pata nahi sahi hai ya galat hai
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node*<int> f =  first;
    Node*<int> s = second;
    Node*<int> temp = NULL;
    while(f->next!=NULL || s->next!=NULL || f!=NULL || s!=NULL  ){
        if(f->data<s->data){
            temp = s->next;
            s->next = f->next;
            f->next = s;
            s = temp;
            f=f->next;
        }
        else{
            temp = f->next;
            f->next = s->next;
            s->next = f;
            f = temp;
            s=s->next;
        }
    
    }
    return (first!=NULL?first:second);
}




//     Node* back = head;
//     // Node* forward =head->next;
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



int main() {
  cout << "program started\n";
 Node* head = NULL;
    head = insert_at_last(head, 1);
    insert_at_last(head, 2);
    insert_at_last(head, 2);
    insert_at_last(head, 2);
    insert_at_last(head, 0);
    insert_at_last(head, 0);
    insert_at_last(head, 1);
    insert_at_last(head, 1);
    insert_at_last(head, 0);
    insert_at_last(head, 0);
    insert_at_last(head, 1);

    head = sort_012_ll(head);

    
    print_ll(head);
    
  cout << "\nprogram ended\n";
  return 0;
}
