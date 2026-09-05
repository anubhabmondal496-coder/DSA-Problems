class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> count;
        int temp = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                temp++;
            }
            else {
                if(temp > 0)
                    count.push_back(temp);

                temp = 0;
            }
        }

        // If the array ends with 1s
        if(temp > 0)
            count.push_back(temp);

        if(count.empty())
            return 0;

        return *max_element(count.begin(), count.end());
    }
};