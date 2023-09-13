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

class ll{
    public:
        Node* head;
        Node* tail;
        ll(){
            head = NULL;
            tail = NULL;
        }

        void delete_beg(){
            if(head==NULL){
                cout << "empty ll\n";
                return;
            }
            if(head->next==NULL){
                tail = NULL;
                head = NULL;
                return;
            }
            Node* temp = head;
            head = head->next;
            delete (temp);
            
        }

        void delete_end(){
            if(head==NULL){
                cout << "empty ll\n";
                return;
            }
            if(head->next==NULL){
                tail = NULL;
                head = NULL;
                return;
            }
            Node* temp = head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            tail = temp;
            Node* to_del = temp->next;
            temp->next = NULL;
            delete(to_del);
        }
    
        void insert_at_begginning(int ele){
            Node* new_node = new Node(ele);
            if(head==NULL){
                head = new_node;
                tail = new_node;
                return;
            }
            new_node->next = head;
            head = new_node;
        }

        void insert_at_last(int ele){
            Node* new_node = new Node(ele);
            if(head==NULL){
                head = new_node;
                tail = new_node;
                return;
            }
            tail->next = new_node;
            tail = new_node;
        }

        void print_ll(){
            if(head==NULL){
                cout << "empty ll\n";
                return;
            }
            Node* temp = head;
            while(temp!=NULL){
                cout << temp->data << " ";
                temp=temp->next;    
            }
        cout << "\n";   
        }

    inline bool is_empty(){
        return (head == NULL);
    }

    // void insert_at_pos(int pos,int ele){
    //     if(pos==1){
    //     insert_at_begginning(ele);
    //     return;
    // }
    // Node* temp = head;
    // int cnt = 1;
    // while(cnt<pos-1){
    //     if(temp==NULL){
    //         cout<<"not enough nodes\n";
    //         return;
    //     }
    //     temp=temp->next;
    //     cnt++;
    // }
    // if(temp -> next == NULL){
    //     insert_at_last(ele);
    //     return;
    // }
    // Node* new_node = new Node(ele);
    // new_node -> next = temp->next;
    // temp -> next = new_node;
          
        
    // }
};


int main() {
  cout << "program started\n";
    ll* l1 = new ll;
    
    l1->print_ll();
    l1->insert_at_last(15);
    l1->insert_at_last(26);
    l1->insert_at_last(57);
    l1->insert_at_last(89);
    l1->insert_at_begginning(95);

    while(!(l1->is_empty())){
        l1->print_ll();    
        cout << "head data: " <<l1->head->data << " tail data: " <<  l1->tail->data << "\n";
        l1->delete_beg();
        l1->delete_end();
        
    }

    

  cout << "\nprogram ended\n";
  return 0;
}
