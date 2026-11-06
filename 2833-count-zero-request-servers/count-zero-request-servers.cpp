
class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {

        // 1. Sort logs by timestamp
        sort(logs.begin(), logs.end(),
            [](const vector<int>& a, const vector<int>& b) {
                return a[1] < b[1];
            });

        // 2. Store queries with their original indices
        vector<pair<int, int>> q;

        for(int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i], i});
        }

        sort(q.begin(), q.end());

        // 3. Frequency array and sliding window
        vector<int> freq(n + 1, 0);
        vector<int> ans(queries.size(), 0);

        int left = 0;
        int right = 0;
        int activeServers = 0;

        // 4. Process sorted queries
        for(int i = 0; i < q.size(); i++) {

            int currentTime = q[i].first;
            int startTime = currentTime - x;

            // Add logs entering the window
            while(right < logs.size() &&
                  logs[right][1] <= currentTime) {

                int server = logs[right][0];

                freq[server]++;

                if(freq[server] == 1) {
                    activeServers++;
                }

                right++;
            }

            // Remove logs leaving the window
            while(left < right &&
                  logs[left][1] < startTime) {

                int server = logs[left][0];

                freq[server]--;

                if(freq[server] == 0) {
                    activeServers--;
                }

                left++;
            }

            // Store answer at original query index
            ans[q[i].second] = n - activeServers;
        }

        return ans;
    }
};
