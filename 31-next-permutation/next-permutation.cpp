class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int br = -1, gr = 0,n = nums.size();
        for(int i = n - 1; i >= 1;i--){
            if(nums[i] > nums[i - 1]){
                br = i - 1;
                break;
            }
        }
        if(br == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i = n - 1; i > br;i--){
            if(nums[br] < nums[i]){
                swap(nums[i],nums[br]);
                break;
            }
        }

        reverse(nums.begin() + br + 1,nums.end());
    }
};