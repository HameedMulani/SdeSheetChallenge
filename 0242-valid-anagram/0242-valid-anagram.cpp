class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        
        if(n != m) return false;
        vector<int> h(26);
        for(int i=0; i<n; i++){
            h[s[i]-'a']++;
        }
        for(int j=0; j<n; j++){
            int x = --h[t[j]-'a'];
            if(x<0) return false;
        }
        return true;
    }
};