//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // use stack
        stack<long> st;
        vector<long long> ans;
        // form n-1 to 0
        for(int i=n-1; i>=0; i--){
            // pop element 
            while(st.size() !=0 && arr[i] > st.top())
                st.pop();
            // here if st become emty or have some value
            if(st.size()==0)
                ans.push_back(-1); // stack me koi isse bada nhi mila to ans me -1 dalo
            else
                ans.push_back(st.top()); // stack me isse bada mila to isko ans me dalo
            
            // push to karna hi he element stack me
            st.push(arr[i]);
        }
        // -1, 3, 1, -1 ,8 -> ulta
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends