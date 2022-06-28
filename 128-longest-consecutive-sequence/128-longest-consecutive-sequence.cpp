class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); i++) // space = O(n)
        {
            s.insert(nums[i]); 
        }
        
        int LCS = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(s.find(nums[i]-1) != s.end()) continue;
            else{
                int count=0;
                int current = nums[i];
                while(s.find(current) != s.end()){
                    count++;
                    current++;
                }
                LCS = max(LCS, count);
            }
        }
        
        return LCS;
    }
};