#include <vector>
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int> arr;
        
        // Node* temp = head;
        // while(temp!=NULL){
        //     arr.push_back(temp->data);
        //     temp = temp->next;
        // }
        
       
        while(head!=NULL){
            arr.push_back(head->data);
            head = head->next;
        }
        int s=0,e=arr.size()-1;
        while(e>s){
            if(arr[s]!=arr[e]){
                return false;
            }
            s++;e--;
        }
        return true;
    }
};




