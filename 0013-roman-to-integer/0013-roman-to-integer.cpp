// class Solution {
// public:
//     int romanToInt(string s) {
//         map<char, int>rmchar;
//         int num=0;
//         rmchar['I'] = 1;
//         rmchar['V'] = 5;
//         rmchar['X'] = 10;
//         rmchar['L'] = 50;
//         rmchar['C'] = 100;
//         rmchar['D'] = 500;
//         rmchar['M'] = 1000;
//         for(int i=0; i<s.size(); i++){
//             num += rmchar[s[i]]; 
//         }
//         return num;
//     }
// };

class Solution {
private: unordered_map<char, int> alphabet;
public:
    int romanToInt(string s) {
        initAlphabet();
        int result = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (alphabet[s[i]] < alphabet[s[i + 1]]) 
                result-= alphabet[s[i]];
            else 
                result+= alphabet[s[i]];
        }
        return result + alphabet[s.back()];
    }
    
private:
    void initAlphabet() {
    alphabet = { {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000} };
        };
};