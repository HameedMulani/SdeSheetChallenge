class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
//         int high = nums.size();
//         for(int i = 0; i < nums.size(); i++)
//         {    
//             int count = 0;
//             for(int j=0; j<nums.size(); j++)
//             {     
//                 if(nums[j] == nums[i]) count++;
//             }
//             if(count > high/2) return nums[i];
//         }
     
//         return -1;
        int candidate = INT_MIN;
        int life = 0;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            if(nums[i] == candidate)
            {
                life++;
            }
            else if(life == 0)
            {
                candidate = nums[i];
                life = 1;
            }
            else{
                life --;
            }
        }
        return candidate;
    }
};