//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    vector<int>dp(n+1,-1); // only i changes
	    
	    int sum = 0;
	    return solve(arr, n, 0, sum, dp);
	}
	
	
    int solve(int *arr, int n, int i, int &ans, vector<int>&dp){
        //base case
        
        if(i>=n) return 0;
        if(dp[i] != -1) return dp[i];
        
        int ans1=0, ans2=0;
        // exclude me i ko nahi liya and i+1 kiya + fn
        ans1 = 0 + solve(arr,n, i+1, ans, dp);
        // include karega to i+2 karr 
        ans2 = arr[i] + solve(arr,n, i+2, ans, dp);
         
         // final ans ka max lenge
        ans = max(ans1, ans2);
        return dp[i] = ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends