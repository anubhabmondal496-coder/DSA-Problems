class Solution {
public:
    int find_left(vector<int>& nums, int tar) {
        int st = 0, end = nums.size() - 1;
        int ans = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == tar) {
                ans = mid;
                end = mid - 1;      // search left
            }
            else if (nums[mid] < tar) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }

    int find_right(vector<int>& nums, int tar) {
        int st = 0, end = nums.size() - 1;
        int ans = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == tar) {
                ans = mid;
                st = mid + 1;       // search right
            }
            else if (nums[mid] < tar) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int tar) {
        return {find_left(nums, tar), find_right(nums, tar)};
    }
};