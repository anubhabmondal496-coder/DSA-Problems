class Solution {
public:
    long long gcd(long long a,long long b){
        while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
        }
        return a;
    }
    long long lcm(long long a,long long b){
        return (a * b) / gcd(a,b);
    }
    int maxLength(vector<int>& nums) {
        int ans = 0;
        for(int i = 0;i < nums.size();i++){
            long long pdt = nums[i];
            long long gcd_val = nums[i];
            long long lcm_val = nums[i];
            for(int j = i + 1;j < nums.size();j++){
                pdt = nums[j] * pdt;
                gcd_val = gcd(gcd_val,nums[j]);
                lcm_val = lcm(lcm_val,nums[j]);
                if(pdt > gcd_val * lcm_val) break;

                if(pdt == lcm_val * gcd_val) ans = max(ans,j - i + 1);
            }
        }
        return ans;
    }
};