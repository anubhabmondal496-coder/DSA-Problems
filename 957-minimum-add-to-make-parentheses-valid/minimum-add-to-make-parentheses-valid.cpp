class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        for(char c: s){
            if(c == '('){
                st.push('(');
            }
            else if(c == ')' && st.size() == 0){
                count++;
            }
            else if(c == ')') st.pop();

        }
        return count + st.size();
    }
};