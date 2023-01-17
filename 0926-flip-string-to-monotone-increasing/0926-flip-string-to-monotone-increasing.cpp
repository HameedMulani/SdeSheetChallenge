class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.size();
        int count_of_ones = 0, flips = 0;
        
        for(int i=0; i<n; i++){
            if(s[i] == '1')
                count_of_ones += 1;
            else
                // 1) (flip + 1) karna hppga
                // and left ke sare ones ko flip karna hoga
                flips = min(flips+1, count_of_ones);
        }
        return flips;
    }
};