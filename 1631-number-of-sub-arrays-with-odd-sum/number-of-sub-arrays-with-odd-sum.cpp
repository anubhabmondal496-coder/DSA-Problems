class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        long long odd = 0;
        long long even = 0;
        long long ans = 0;

        int mod = 1e9 + 7;

        for(int x : arr) {

            if(x % 2 == 1) {
                long long temp = odd;
                odd = even + 1;
                even = temp;
            }
            else {
                even++;
            }

            ans = (ans + odd) % mod;
            odd %= mod;
            even %= mod;
        }

        return ans;
    }
};