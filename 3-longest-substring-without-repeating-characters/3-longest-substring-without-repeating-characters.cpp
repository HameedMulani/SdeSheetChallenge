class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count[256] = {0};
        int l = 0;
        int r = 0;
        int maxstr = 0;
        
       while(r<s.length()){
           count[s[r]]++;
           while(count[s[r]]>1){
               count[s[l]]--;
               l++;
           }
           maxstr = max(maxstr, r-l+1);
           r++;
       }
    return maxstr;
    }
};