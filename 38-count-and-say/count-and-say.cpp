class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i = 1;i < n;i++){
            string next_s = "";
            int count = 1;
            for(int j = 1;j < s.size();j++){
                if(s[j] == s[j-1]){
                    count++;
                }else{
                    next_s += to_string(count) + s[j - 1];
                    count = 1;
                }
            }
            next_s += to_string(count) + s.back();
            s = next_s;

        }
        return s;
    }
};