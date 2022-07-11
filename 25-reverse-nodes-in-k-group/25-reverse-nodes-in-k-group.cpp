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
    void reverse(ListNode*s, ListNode*e){
        ListNode *prev = NULL, *curr = s, *Next = s->next;
        while(prev!=e){
            curr->next = prev;
            prev = curr;
            curr = Next;
            if(Next!=NULL)Next = Next->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next) 
            return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *beforeStart = dummy, *e = head;
        int i = 0;
        while(e){
            i++;
            if(i%k == 0){
                // reversel
                ListNode *s = beforeStart->next, *temp = e->next;
                reverse(s,e);
                beforeStart->next = e;
                s->next = temp;
                beforeStart = s;
                e = temp;
            }else{
                e = e->next;
            }
               
        }
        return dummy->next;
        
    }
};