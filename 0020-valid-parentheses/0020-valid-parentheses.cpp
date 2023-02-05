class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]== '(' or s[i] == '{' or s[i] == '['){
                st.push(s[i]);
            }else{
                if(st.empty()) return false;
                
                if((s[i] == ')' && st.top() == '(')
                   or (s[i] == ']' && st.top() == '[') or
                    (s[i] == '}' && st.top() == '{'))
                {
                        st.pop();
                }else{
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};