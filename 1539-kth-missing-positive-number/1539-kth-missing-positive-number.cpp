class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        
        int n = nums.size();
        int l=0, r = n-1;
        int mid = -1;
         while(l <=r){
             mid = l + (r-l)/2;
             
             int how_many_no_missing_till_mid = nums[mid] - (mid+1);
             
             if(how_many_no_missing_till_mid < k){
                 l=mid+1;
             }else{
                 r=mid-1;
             }
         }
        
        return l+k;
    }
};