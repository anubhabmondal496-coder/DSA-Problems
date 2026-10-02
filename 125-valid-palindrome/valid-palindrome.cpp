class Solution {
public:
    bool isPalindrome(string s) {
        deque<char> d;
        for(int i =0;i < s.length();i++){
            if(s[i] >= 65 && s[i] <= 90){
                char a = s[i] + 32;
                d.push_back(a);
            }
            else if(s[i] >= 97 && s[i] <= 122){
                d.push_back(s[i]);
            }
            else if(s[i] >= 48 && s[i] <= 57){
                d.push_back(s[i]);
            }
            else{
                continue;
            }
        }
        while(d.size() > 1){
            if(d.front() == d.back()){
                d.pop_front();
                d.pop_back();
            }
            else{
                return false;
            }
        }
        return true;
    }
};