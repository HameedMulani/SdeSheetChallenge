class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1){
            return 1;
        }
        vector<int>trustedCount(n+1,0);
        for(auto i: trust){
            trustedCount[i[0]]--;
            trustedCount[i[1]]++;
        }
        for(int judge=0; judge<trustedCount.size(); judge++){
            if(trustedCount[judge]==(n-1)) return judge;
        }
        return -1;
    }
};