#include <iostream>

using namespace std;

ListNode* middleNode(ListNode* head) {
        if(head -> next == NULL){
            return head;
        }
        if(head -> next -> next == NULL){
            return head->next;
        }
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }


int main() {
  cout << "program started\n";


  cout << "\nprogram ended\n";
  return 0;
}
