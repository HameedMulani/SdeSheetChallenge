/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0) 
            return head;
        // step 1 : fine Lenth of List
        ListNode *cur = head;
        int len = 1;
        while(cur->next != NULL){
            len++;
            cur = cur->next;
        }
        // made circular Linked List
        cur->next = head;
        // optimal K
        k = k % len;
        int tillPointer = len - k;
        while(tillPointer){
            cur = cur->next;
            tillPointer--;
        }
        head = cur->next;
        cur->next = NULL;
        return head;
    }
    
};