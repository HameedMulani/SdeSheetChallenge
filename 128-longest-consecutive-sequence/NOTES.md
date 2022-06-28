int longestConsecutive(vector<int>& nums) {
if(nums.size() == 0) return 0;
sort(nums.begin(), nums.end());
// int lonCon
int LCS = 1;
for(int i = 1; i < nums.size(); i++)
{
if(nums[i] == nums[i-1]+1) count++;
}
return LCS;