class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxNo = 0, count = 0;
        int i = 0;
        int n = nums.size();
        while(i < n){
            if(nums[i] == 1) count++;
            else count = 0;
            maxNo = max(maxNo, count);
            i++;
        }
        return maxNo;
    }
};