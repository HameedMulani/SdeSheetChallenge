//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        string ans = "";
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(!st.empty() && s[i] == st.top()){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        
        if(ans.size()>0) return ans;
        return "-1";
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends