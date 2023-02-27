//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
public:
   
    Node *reverse(Node *head, int k)
    {
         // code here
        if(head->next==NULL){
            return head;
        }else if(head->next->next==NULL){
            return head;
        }else{
            int count=2;
            Node *fir = head;
            Node *sec = head->next;
            Node *third = head->next->next;
            fir->next=NULL;
            while (third!=NULL)
            {
                sec->next=fir;
                fir=sec;
                sec=third;
                third=third->next;
                ++count;
            }
            sec->next=fir;
            Node * start_of_second_list = sec;
            Node * end_of_second_list = sec;
            Node * start_of_first_list;
            Node * end_of_first_list = head;
            count = count-k;
            // cout<<count<<endl;
            while (--count)
            {
                end_of_second_list = end_of_second_list->next;
            }
            start_of_first_list = end_of_second_list->next;
            // cout<<start_of_second_list->data<<" "<<end_of_second_list->data<<endl;
            // cout<<start_of_first_list->data<<" "<<end_of_first_list->data<<endl;
            // return sec;
            end_of_second_list->next=NULL;
            end_of_first_list->next = start_of_second_list;
            return start_of_first_list;
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        struct Node *head = inputList();
        int k;
        cin >> k;

        Solution obj;
        Node *res = obj.reverse(head, k);

        printList(res);
    }
}
// } Driver Code Ends