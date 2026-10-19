class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int count1 = 0,count2  = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == target){
                count2++;
            }
            if(nums[i] < target){
                count1++;
            }
        }
        if(count2 == 0){
            return {};
        }
        for(int i = count1;i <= count1 + count2 - 1;i++){
            ans.push_back(i);
        }
        return ans;
    }
};