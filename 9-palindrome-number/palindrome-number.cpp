class Solution {
public:
    bool isPalindrome(int x) {
        long long rem,temp,sum = 0;
        temp = x;
        if(x < 0){
            return 0;
        }
        while(temp != 0)
        {
            rem = temp % 10;
            temp /= 10;
            sum = (sum * 10) + rem;
        }
        if(x == sum)
        {
            return 1;
        }
        else return 0;
        
        return 0;
    }
};