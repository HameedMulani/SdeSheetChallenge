class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int votes = 0;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            if(votes==0){
                votes++;
                candidate = nums[i];
            }else if(nums[i] == candidate){
                votes++;
            }else{
                votes--;
            }
        }
        return candidate;
    }
};