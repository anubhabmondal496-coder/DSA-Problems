class Solution {
public:
    int countCommas(int n) {
        long long comma = 0;
        for(long long i = 1000,com = 1;i <= n;i *= 1000,com++){
            comma = n - i + 1;
        }
        return comma;
    }
};