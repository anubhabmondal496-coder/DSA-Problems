class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum1 = 0,sum2 = 0;
        for(int i = 1;i <= 2 * n;i++){
            if(i % 2 == 0){
                sum1 += i;
            }
            else{
                sum2 += i;
            }
        }
        while(sum1 > 0 || sum2 > 0){
            if(sum1 == sum2){
                return sum1;
            }

            if(sum1 > sum2){
                sum1 = sum1 % sum2;
            }
            else if(sum1 < sum2){
                sum2 = sum2 % sum1;
            }
            if(sum1 == 0 || sum2 == 0){
                break;
            }
        }
        int GCD = max(sum1,sum2);
        return GCD;
    }
};