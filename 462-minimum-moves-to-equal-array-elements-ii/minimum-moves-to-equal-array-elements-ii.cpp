class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int median = nums[n / 2];
        int i = 0;
        int count = 0;
        while(i < n){
            int in_count = 0;
            if(nums[i] <= median){
                in_count = median - nums[i];
                i++;
            }else{
                in_count = nums[i] - median;
                i++;
            }
            count += in_count;
        }
        return count;
    }
};