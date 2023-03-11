class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        if(!head->next){
            return new TreeNode(head->val);
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* slow_prev = NULL;
        
        while(fast && fast->next){
            
            slow_prev = slow;
            slow = slow->next;
            fast = (fast->next)->next;
            
        }
        
        // slow  pakka mid ko point karra hoga
        TreeNode* root = new TreeNode(slow->val);
        
        slow_prev->next = NULL;
        
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);
        
        
        return root;
        
    }
};