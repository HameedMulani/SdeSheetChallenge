class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
       // using transform() function and ::tolower in STL
        transform(s.begin(), s.end(), s.begin(), ::tolower);
       //A = 65 ans Z = 90
       // a= 91 and z = 
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                str += s[i];
            }
            else if((s[i] >= 'a'&& s[i]<= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
               {                     
                   str += s[i];
               }
        }
        int n=str.size()-1;
        for(int i=0; i<str.size()/2; i++){
         if(str[i] != str[n-i]) return false;
        }
        return true;
    }
};