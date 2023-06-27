//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
     void solve(string s, int i, set<string>&st){
	        if(i >= s.size()){
	            st.insert(s);
	            return;
	        }
	        for(int j = i; j<s.size(); j++){
	            swap(s[i], s[j]);
	            solve(s, i+1, st);
	            swap(s[i], s[j]);
	        }
	    }
    
    vector<string> permutation(string S)
    {
        vector<string> ans;
		    set<string>st;
		    int ind=0;
		    solve(S, ind, st);
		    for(auto it: st) ans.push_back(it);
		 return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends