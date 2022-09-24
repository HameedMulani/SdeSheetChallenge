class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
           // vector<int> v;
//     sort(arr.begin(),arr.end());
        int n = nums.size();
    make_heap(nums.begin(),nums.end());
    sort_heap(nums.begin(),nums.end());
   
    // v.push_back(arr[n-k]);
    return nums[n-k];
    }
};