class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;
        for(int i = 0;i < s.length();i++){
            if(s[i] == '(' && st.size() < 1){
                st.push(s[i]);
            }
            else if(s[i] == '('){
                ans += s[i];
                st.push(s[i]);
            }
            else if(s[i] == ')' && st.size() == 1){
                st.pop();
            }
            else if(s[i] == ')' && st.size() > 1){ 
                st.pop();
                ans += s[i];
            }
        } 
        return ans;
    }
};