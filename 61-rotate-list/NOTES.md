ListNode* rotateRight(ListNode* head, int k) {
​
// step 1:Base Case=> if k=0 or Linked List have 0 or 1 node
if(head==NULL or head->next==NULL or k==0) return head;
//Step 2:Counting no of Node since k can be greater than no. of node
ListNode* curr=head;
int n=1;// n=length of Linked List
while(curr->next) {n++;curr=curr->next;}
// Step3: if k > n then k%n rotatation required(since n<=500 and k is <=2*10^9)
k=k%n;
// Step4: if k is multiple of n(length)  0(no) rotation required
if(k==0) return head;
//Step 5:Connect Last node to First node since curr is at Last Node
curr->next=head;
//Step 6:for k(may be changed if k>n) rotation head should point (n-k)th node from begining
// Initialise curr=head and move (n-k-1) steps that node is end node of rotated linked List
curr=head;
int step=n-k-1;
while(step--){curr=curr->next;}
//step 7: Link and make  head = curr->next and curr->next NULL;
head=curr->next;
curr->next=NULL;
//return new head
return head;
}