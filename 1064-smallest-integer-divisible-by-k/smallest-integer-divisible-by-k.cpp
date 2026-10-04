class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k % 2 == 0 && k % 5 == 0){
            return -1;
        }
        long long remainder = 0;
        for(int digits = 1;digits <= k;digits++){
            remainder = (remainder * 10 + 1) % k;
            if(remainder == 0){
                return digits;
            }
        }
        return -1;

    }
};