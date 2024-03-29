//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            vector<int>row;
            vector<int>col;
            
            row.push_back(0);
            col.push_back(0);
            
            // fill enemies
            for(int i=0; i<k; i++){
                row.push_back(enemy[i][0]);
                col.push_back(enemy[i][1]);
            }
            sort(row.begin(), row.end());
            sort(col.begin(), col.end());
            
            // for end fill
            row.push_back(n+1);
            col.push_back(m+1);
            
            int mr = INT_MIN;
            int mc = INT_MIN;
            // find unblocked row max
            for(int i=1; i<row.size(); i++){
                mr = max(mr, row[i]-row[i-1]-1);
            }
             // find unblocked col max
            for(int i=1; i<col.size();i++){
                 mc = max(mc, col[i]-col[i-1]-1);
            }
            
            return mr*mc;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k;
        cin>>k;
        vector<vector<int>> e(k,vector<int>(2));
        for(int i=0;i<k;i++)
            cin>>e[i][0]>>e[i][1];
        Solution a;
        cout<<a.largestArea(n,m,k,e)<<endl;
    }
    return 0;
}
// } Driver Code Ends