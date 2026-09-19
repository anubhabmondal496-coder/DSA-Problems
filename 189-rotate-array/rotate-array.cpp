class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        deque<int> dq;
        for (int i = 0; i < n; i++) {
            dq.push_back(nums[i]);
        }
        while (k--) {
            dq.push_front(dq.back());
            dq.pop_back();
        }
        for (int i = 0; i < n; i++) {
            nums[i] = dq.front();
            dq.pop_front();
        }
    }
};