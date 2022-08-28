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
    int getDecimalValue(ListNode* head) {
//  
//         8 4 2 1
//         1 0 1 0 = 10   
// //         (2^n) + (2^3) + (2^2)+(2^1) +(2^0)
//     trickiest part is how to know where 2^1 or 2^5 
//         method 1 is to revers list -> to start from last
//         method 2 is find length = 3 so keep -- pow of 2
                // 2          1        1 
//             (2^3-1) + (2^3-2) +(2^3-3) = ans
//         method 3 asume fisrt node is last node i.e. 2^0
        // initiali ans = 0, 1 * 2^1 means -> 2 + head->val 
//         
        int result = 0;
        ListNode *temp = head;
        while(temp != NULL){
            result = result*2;
            result = result + temp->val; // (temp->val) + 2^0 = temp->val
            temp = temp->next;
        }
        return result;
            
    }
};