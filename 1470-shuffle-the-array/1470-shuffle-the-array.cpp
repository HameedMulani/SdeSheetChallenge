class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int len = n<<1; //2*n
        vector<int> ans(len);
        int x=0, y=n;
        int i=0;
        while(i<len){
            ans[i++] = nums[x++];
            ans[i++] = nums[y++];
        }
        return ans;
    }
};