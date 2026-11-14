class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT32_MAX;
        for(int i = 0;i< nums.size();i++){
            int sum = 0;
            for(int j = i;j < nums.size();j++){
                sum += nums[j];
                int length = j - i + 1;
                if(length >= l && length <= r){
                    if(sum > 0){
                        ans = min(ans,sum);
                    }
                }
                if(length > r) break;
            }
        }
        return ans == INT32_MAX ? -1 : ans;
    }
};