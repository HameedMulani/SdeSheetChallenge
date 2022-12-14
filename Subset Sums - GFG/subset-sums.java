//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int N=sc.nextInt();
			ArrayList<Integer> arr = new ArrayList<>();
			for(int i = 0; i < N ; i++){
			    arr.add(sc.nextInt());
			}
            Solution ob = new Solution();
         
            ArrayList<Integer> ans = ob.subsetSums(arr,N);
            Collections.sort(ans);
            for(int sum : ans){
                System.out.print(sum+" ");
            }
            System.out.println();
        }  
    }
}

// } Driver Code Ends


//User function Template for Java//User function Template for Java
class Solution{
    void subSetSum(int ind, int sum,ArrayList<Integer>arr,int N,ArrayList<Integer>ans){
        if(ind == N){
            ans.add(sum);
            return;
        }
        // pick the element
        subSetSum(ind+1, sum+arr.get(ind),arr,N,ans);
        
        // do-not pick the element
        subSetSum(ind+1, sum, arr, N, ans);
    }
    
    ArrayList<Integer> subsetSums(ArrayList<Integer> arr, int N){
        ArrayList<Integer> ss = new ArrayList<>();
        subSetSum(0,0,arr,N,ss);
        Collections.sort(ss);
        return ss;
    }
}