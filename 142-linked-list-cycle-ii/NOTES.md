space = O(N)
if(!head || !head->next)
return NULL;
unordered_set<ListNode*> set;
while(head != NULL){
if(set.find(head) != set.end()) return head;
set.insert(head);
head = head->next;
}
return NULL;
space = O(1)
​