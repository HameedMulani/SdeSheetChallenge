//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
       // make upper and lower string
       string upper = "", lower = "";
       for(char ch: str){
           if(islower(ch)) lower += ch;
           else upper += ch;
       }
       // sort them both
       sort(upper.begin(), upper.end());
       sort(lower.begin(), lower.end());
       // make counter of both string
       int u, l = 0;
       for(int ch=0; ch<n; ch++){
           if(islower(str[ch])) str[ch] = lower[l++];
           else str[ch] = upper[u++];
       }
       
       return str;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends