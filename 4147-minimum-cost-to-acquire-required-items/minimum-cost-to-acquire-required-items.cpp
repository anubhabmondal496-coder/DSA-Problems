class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long total1 = 1LL * need1 * cost1 + 1LL * need2 * cost2;
        int need3 = max(need1,need2);
        long long total2 = 1LL * costBoth * need3;
        int need4 = min(need1,need2);
        long long total3 = 1LL * costBoth * need4 + 1LL * (need1 - need4) * cost1 + 1LL * (need2 - need4) * cost2;
        return min({total1,total2,total3});
    }
};