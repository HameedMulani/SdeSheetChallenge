// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int mLen = 0;
        
        int i = -1;
        int sum = 0;
        unordered_map<int, int>mp;
        mp.insert({sum, i});
        while(i < n-1){
            i++;
            sum = sum + A[i];
            
            if(mp.find(sum) == mp.end()){
              mp.insert({sum,i});
            }else{
                 int len = i - mp[sum];
                if(len > mLen){
                    mLen = len;
                }
            }
        }
        return mLen;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends