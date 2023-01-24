//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    int temp[n];
	    // copy array into temp 
	    for(int i=0; i<n; i++){
	        temp[i] = arr[i];
	    }
	    //sort temp array
	    sort(temp, temp+n);
        // store the temp array with its index into MAP
        unordered_map<int, int>mp;
        for(int i=0; i<n; i++){
            mp[temp[i]] = i;
        }
        // replace original arra by map value 
        // arr[10] = 0
        // arr[20] = 1
        // arr[n-1] = n-1;
        for(int i=0; i<n; i++){
            arr[i] = mp[arr[i]];
        }
        
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
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends