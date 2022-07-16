/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        // insert New Node in Between
        Node *cur = head;
        while(cur != NULL){
            Node *temp = cur->next;
            cur->next = new Node(cur->val);
            
            cur->next->next = temp;
            cur = temp;
        }
        
        cur = head;
        // setting Random pointer of new Node
        while(cur != NULL){
            if(cur->next != NULL){
                cur->next->random = (cur->random != NULL)? cur->random->next : NULL; 
            }
            cur = cur->next->next;
        }
        
        Node *orig = head;
        Node *copy = head->next;
        Node *temp = copy; // for returning a result
        // seperatting both Linked Lists
        
        while(orig != NULL || copy != NULL){
            orig->next = orig->next->next;
            if(copy->next != NULL) copy->next = copy->next->next; 
            
            // increment both List
            orig = orig->next;
            copy = copy->next;
        }
        
        return temp;
    }
};