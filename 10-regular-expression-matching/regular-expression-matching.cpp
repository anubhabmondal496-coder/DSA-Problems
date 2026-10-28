class Solution {
public:
    int dp[21][21];

    bool solve(int i, int j, string& s, string& p) {
        if (dp[i][j] != -1)
            return dp[i][j];

        if (j == p.length())
            return dp[i][j] = (i == s.length());

        bool match = i < s.length() &&
                     (s[i] == p[j] || p[j] == '.');

        if (j + 1 < p.length() && p[j + 1] == '*') {
            return dp[i][j] =
                solve(i, j + 2, s, p) ||
                (match && solve(i + 1, j, s, p));
        }

        return dp[i][j] =
            match && solve(i + 1, j + 1, s, p);
    }

    bool isMatch(string s, string p) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, s, p);
    }
};