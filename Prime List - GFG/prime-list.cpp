//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
    bool isPrime(int x){
        if(x==1) return false;
        
        for(int i=2; i*i<=x; i++){
            if(x%i==0) return false;
        }
        return true;
    }
    Node *primeList(Node *head){
        Node* temp = head;
        
        while(temp != NULL)
        {
            int n = temp->val;
            int prev = n;
            int ahead = n;
            if(n == 1){
                temp->val = 2;
                temp = temp->next;
                continue;
            }
            while(!isPrime(prev)){
                prev--;
            }
            
            while(!isPrime(ahead)){
                ahead++;
            }
            
            int dist1 = n-prev;
            int dist2 = ahead-n;
            if(dist1<dist2) temp->val=prev;
            else if(dist2<dist1) temp->val = ahead;
            else temp->val = prev;
            
            temp = temp->next;
        }
        
        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends