
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1,
                               vector<int>& nums2,
                               int k1, int k2) {
        long long k = (long long)k1 + k2;
        vector<long long> freq(100001, 0);
        int mx = 0;
        long long total = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int d = abs(nums1[i] - nums2[i]);
            freq[d]++;
            mx = max(mx, d);
            total += d;
        }

        if (k >= total) return 0;

        for (int d = mx; d > 0 && k > 0; d--) {
            long long cnt = freq[d];
            if (cnt == 0) continue;

            long long use = min(k, cnt);
            freq[d] -= use;
            freq[d - 1] += use;
            k -= use;
        }

        long long ans = 0;
        for (int d = 1; d <= mx; d++) {
            ans += freq[d] * d * d;
        }

        return ans;
    }
};
