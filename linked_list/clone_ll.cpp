class Solution
{   
    private:
        void insert_at_tail(Node* &head,Node* &tail,int &data){
            Node* new_node = new Node(data);
            if(head==NULL){
                head = new_node;
                tail = new_node;
                return;
            }
            
            tail->next = new_node;
            tail = new_node;
            
        }
    
    public:
    Node *copyList(Node* &head)
    {
        
        Node* clonehead = NULL;
        Node* clonetail = NULL;
        Node* temp = head;
        
        
        while(temp!=NULL){
            insert_at_tail(clonehead,clonetail,temp->data);
            temp=temp->next;
        }
        
        unordered_map<Node*,Node*> orig_to_clon;
        
        Node* orig_node = head;
        Node* cloned_node = clonehead;
        // && cloned_node!=NULL
        while(orig_node!=NULL ){
            orig_to_clon[orig_node] = cloned_node;
            cloned_node=cloned_node->next;
            orig_node=orig_node->next;
        }
        
        orig_node = head;
        cloned_node = clonehead;
        
        while(orig_node!=NULL){
            cloned_node->arb = orig_to_clon[orig_node->arb];
            cloned_node=cloned_node->next;
            orig_node=orig_node->next;
        }
        
        return cloned_node;
        
    }

};