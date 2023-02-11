//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
       int count = 0;
       // 1) count pairs
       for(int i=1; i<N; i++){
           if(S[i] == S[i-1]) count++;
       }
       
       // 3) if no pairs return 0;
       if(count == 0) return 0;
       // 2) replace with '?'
       for(int i=0; i<N; i++){
           int idx = P[i];
           if(idx>0 and S[idx]==S[idx-1]){
              
               count--;
           }
           if(idx<N-1 and S[idx]==S[idx+1]){
        
               count--;
           }
           if(count==0) return i+1; // how many days you take 
           S[idx] = '?';
       }
       
       return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends