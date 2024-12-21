class Solution {
    int k, ans;
    vector<vector<int>> adj;
    vector<int> values;
    vector<long long> sum;

    void dfs(int u, int p) {
        sum[u] = values[u];
        for (int v : adj[u]) {
            if (v == p)
                continue;
            dfs(v, u);
            sum[u] += sum[v];
        }
        if (sum[u] % k == 0) {
            ans++;
            sum[u] = 0;
        }
    }

public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges,
                                vector<int>& values, int k) {
        adj.resize(n);
        sum.resize(n);
        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        this->values = values;
        this->k = k;

        ans = 0;
        dfs(0, -1);
        return ans;
    }
};