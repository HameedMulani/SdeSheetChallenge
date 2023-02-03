class Solution {
public:
    int romanToInt(string s) {
        map<char, int>rmchar;
        int num=0;
        rmchar['I'] = 1;
        rmchar['V'] = 5;
        rmchar['X'] = 10;
        rmchar['L'] = 50;
        rmchar['C'] = 100;
        rmchar['D'] = 500;
        rmchar['M'] = 1000;
        for(int i=0; i<s.size(); i++){
            if(rmchar[s[i]]<rmchar[s[i+1]])
                num-=rmchar[s[i]];
            else
                num+=rmchar[s[i]];
        }
        return num;
    }
};