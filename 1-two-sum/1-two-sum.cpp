class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pair;
        unordered_map <int,int> mp;
        
        for(int i=0; i<nums.size(); i++)
        {   
            // 2->-, 7->1..
            if(mp.find(nums[i]) == mp.end())
                mp[nums[i]] = i;
            if(mp.find(target-nums[i]) != mp.end() && i != mp[target-nums[i]])
            {
                pair.push_back(i);
                pair.push_back(mp[target-nums[i]]);
                break;
            }
        }
        return pair;
    }
};