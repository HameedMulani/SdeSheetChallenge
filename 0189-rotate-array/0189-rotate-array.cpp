class Solution {
public:
    void rotate(vector<int>& nums, int d) {
        int n = nums.size();
        d = d%n;
        if(d==0 || d==n)return;
        
        reverse(nums.begin(), nums.begin()+(n-d));
        reverse(nums.begin()+(n-d), nums.end());
        reverse(nums.begin(), nums.end());
    }
};