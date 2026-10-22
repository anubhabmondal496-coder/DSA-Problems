
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int leftMax = nums[0];
        int curMax = nums[0];
        int leftSize = 1;

        for (int i = 1; i < nums.size(); i++) {
            curMax = max(curMax, nums[i]);

            if (nums[i] < leftMax) {
                leftMax = curMax;
                leftSize = i + 1;
            }
        }

        return leftSize;
    }
};
