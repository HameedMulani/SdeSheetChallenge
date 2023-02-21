class Solution {
public:
    int singleNumber(vector<int>& nums) {
      long long int  ans = 0;
        for(auto x: nums){
            ans ^= x;
        }
        return ans;
    }
};