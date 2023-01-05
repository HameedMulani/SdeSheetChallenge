//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    bool IsPrefix(string str, unordered_map<string,int>&m){
        string temp = "";
        for(int i=0;i<str.length();i++){
            temp = temp + str[i];
            if(m[temp]==0) return false; // if(m.find(temp) == m.end()
        }
        return true;
    }
    string longestString(vector<string> &words)
    {
        unordered_map<string, int>m;
        string ans = "";
        for(string it: words) m[it]++;
        for(auto it: words){
            if(IsPrefix(it, m)){
                // if prefix exits and ele ki lenght ans se badi he to ele lo
                if(it.length()>ans.length()) ans=it;
                // if both same then lexilogically smaller should be taken
                else if(it.length()==ans.length()) ans=min(ans,it); 
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends