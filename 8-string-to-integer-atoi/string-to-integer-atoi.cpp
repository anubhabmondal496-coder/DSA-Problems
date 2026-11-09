class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        int n = s.length();
        int i = 0;
        int sign = 1;
        while(i < n && s[i] == ' '){
            i++;
        }
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            num = num * 10 + digit;
            if (sign * num > INT_MAX) {
                return INT_MAX;
            }
            if (sign * num < INT_MIN) {
                return INT_MIN;
            }
            i++;
        }
        return sign * num;
    }
};