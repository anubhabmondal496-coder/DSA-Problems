class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_term = *min_element(nums.begin(),nums.end());
        int n = nums.size();
        int sum = 0;
        for(int i = 0;i < n;i++){
            sum += nums[i];
        }
        return sum - n * min_term; 
    }
};