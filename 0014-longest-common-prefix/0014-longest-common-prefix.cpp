class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        
        // sort array of string
        sort(strs.begin(), strs.end());
        
        // Get Fisrt and last word of Array
        string first = strs[0];
        string last = strs[strs.size()-1];
        
        // Compare each char in word
        for(int i=0; i<first.size(); i++){
            if(first[i] != last[i])
                break;
        ans += first[i];
        }
        
        return ans;
    }
};