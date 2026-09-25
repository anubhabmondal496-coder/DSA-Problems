class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stack1;
        stack<char> stack2;
        for(char c : s){
            if(c == '#'){
                if(!stack1.empty()){
                    stack1.pop();
                }
            }else{
                stack1.push(c);
            }
        }

        for(char c : t){
            if(c == '#'){
                if(!stack2.empty()){
                    stack2.pop();
                }
            }else{
                stack2.push(c);
            }
        }
        string str1;
        string str2;
        while (!stack1.empty()) {
            str1 += stack1.top();
            stack1.pop();
        }
        while (!stack2.empty()) {
            str2 += stack2.top();
            stack2.pop();
        }

        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());

        if(str1 == str2){
            return true;
        }
        return false;
    }
};