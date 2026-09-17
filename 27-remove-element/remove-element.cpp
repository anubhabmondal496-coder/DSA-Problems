class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        stack<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                s.push(nums[i]);   
            }
        }
        int i = 0;
        while(!s.empty()){
            nums[i] = s.top();
            s.pop();
            i++;
        }

        return i;
    }
};