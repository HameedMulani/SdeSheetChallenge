//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Easy and straightforward implementation 

// 1 counting set bits in B.

// 2 setting bits where bits are already set in A \
// in the order of MSB(most significant bit)
// so to make Xor minimum 1^1=0

// 3 if set bits in B are more than A 
// set then set left bits in LSB(least significant order) 
// /so make Xor minimum 1^0=1
class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int set=0;
        for(int i=0;i<=30;i++){
            if(b&(1<<i)) set++;
        }
        int ans=0;
        for(int i=30;i>=0;i--){
            if(a&(1<<i) and set>0){
                ans|=1<<i;
                set--;
            }
        }
        int i=0;
        while(set>0){
            while(a&(1<<i)) i++;
            ans|=1<<i;
            set--;
            i++;
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends