class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        int d = 0;
        while(n>0){
            if((n&1)) result++;
            n=n>>1;
        }
        return result;
    }
};