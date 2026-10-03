class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        string ans;
        int t = 0;
        while(t < s1.length() && t < s2.length()){
            ans += s1[t];
            ans += s2[t];
            t++;
        }
        while(t < s2.length()){
            ans += s2[t];
            t++;
        }
        while(t < s1.length()){
            ans += s1[t];
            t++;
        }
        return ans;
    }
};