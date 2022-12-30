//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long Gcd(long a, long b)
    {
         if(b==0)
           return a;
         
         return Gcd(b,a%b);
    }
    
    long solve(int n)
    {
        long x=n *(n-1)/Gcd(n,n-1);
        long y=(n-2)*(n-3)/Gcd(n-2,n-3);
        
        long ans=x*y/Gcd(x,y);
        
        long mx=n*(n-1);
        int flag=0;
        
        for(int i=n-2;i>=1;i--)
        {
            if(Gcd(mx,i)==1)
            {
                flag++;
                mx=mx*i;
            }
            if(flag==2)
              break;
        }
        ans=max(ans,mx);
        return ans;
    }
    long long maxGcd(int N) {
        // code here
        
        return max(solve(N),solve(N-1));
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.maxGcd(N) << "\n";
    }
}
// } Driver Code Ends