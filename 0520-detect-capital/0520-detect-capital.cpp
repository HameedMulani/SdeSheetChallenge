class Solution {
public:
    
    bool isUpper(char ch){
        return ch>='A' and ch<='Z';
    }
    bool detectCapitalUse(string word) {
        int N = word.size();
        int uppers = 0;
        for(int i=0; i<N; i++){
            if(isUpper(word[i]))
                uppers++;
        }
        if(uppers == N or uppers==0 or (uppers==1 and isUpper(word[0])))
            return true;
        else
            return false;
    }
};