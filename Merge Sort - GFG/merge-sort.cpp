// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{// example of merge sort in C/C++
        // merge function take two intervals
        // one from start to mid
        // second from mid+1, to end
        // and merge them in sorted order
    public:
    void merge(int arr[], int start, int mid, int end)
    {
    	// create a temp array
    	int temp[end - start + 1];
    
    	// crawlers for both intervals and for temp
    	int i = start, j = mid+1, k = 0;
    
    	// traverse both arrays and in each iteration add smaller of both elements in temp 
    	while(i <= mid && j <= end) {
    		if(arr[i] <= arr[j]) {
    			temp[k] = arr[i];
    			k += 1; i += 1;
    		}
    		else {
    			temp[k] = arr[j];
    			k += 1; j += 1;
    		}
    	}
    
    	// add elements left in the first interval 
    	while(i <= mid) {
    		temp[k] = arr[i];
    		k += 1; i += 1;
    	}
    
    	// add elements left in the second interval 
    	while(j <= end) {
    		temp[k] = arr[j];
    		k += 1; j += 1;
    	}
    
    	// copy temp to original interval
    	for(i = start; i <= end; i += 1) {
    		arr[i] = temp[i - start];
    	}
    	
    }
    
    public:
    void mergeSort(int arr[], int start, int end)
    {
    // Arr is an array of integer type
    // start and end are the starting and ending index of current interval of Arr
    	if(start < end) {
    		int mid = (start + end) / 2;
    		mergeSort(arr, start, mid);
    		mergeSort(arr, mid+1, end);
    		merge(arr, start, mid, end);
    	}
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends