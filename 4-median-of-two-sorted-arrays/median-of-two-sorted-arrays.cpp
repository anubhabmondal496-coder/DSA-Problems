class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0, j = 0;
        vector<int> ans;
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m){
            ans.push_back(nums1[i]);
            i++;
        }
        while(j < n){
            ans.push_back(nums2[j]);
            j++;
        }
        float ans_;
        if((m + n) % 2 == 1){
            ans_ = ans[(m + n) / 2];
            return ans_;
        }
        else{
            ans_ = (ans[(m + n) / 2] + ans[(m + n) / 2 - 1]) / 2.0;
        }

        return ans_;
    }
};