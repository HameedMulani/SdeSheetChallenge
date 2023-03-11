class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mp;
        vector<int>ans;
        for(int &x: nums1){
            mp[x]++;
        }
        for(int &y: nums2){
           auto key = mp.find(y);
            if(key != mp.end() && key->second>0){
                ans.push_back(y);
                mp[y]--;
            }
            
        }
        return ans;
        
    }
};