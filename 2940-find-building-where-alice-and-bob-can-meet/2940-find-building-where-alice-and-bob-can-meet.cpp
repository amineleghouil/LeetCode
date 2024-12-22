class Solution {
public:
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        int n = heights.size(), q = queries.size();
        vector<int> result(q, -1);
        vector<vector<pair<int, int>>> deferred(n);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        for (int i = 0; i < q; ++i) {
            int a = queries[i][0], b = queries[i][1];
            if (a > b) swap(a, b);
            if (a == b || heights[a] < heights[b]) result[i] = b;
            else deferred[b].emplace_back(heights[a], i);
        }

        for (int i = 0; i < n; ++i) {
            for (auto& query : deferred[i]) pq.push(query);
            while (!pq.empty() && pq.top().first < heights[i]) {
                result[pq.top().second] = i;
                pq.pop();
            }
        }

        return result;
    }
};