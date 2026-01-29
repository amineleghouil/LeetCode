class Solution {
public:
    void dijkstra(int src, vector<pair<int,int>> adj[], vector<int>& dist) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d > dist[u]) continue;

            for (auto [v, w] : adj[u]) {
                if (dist[v] > d + w) {
                    dist[v] = d + w;
                    pq.push({dist[v], v});
                }
            }
        }
    }

    long long minimumCost(
        string source,
        string target,
        vector<char>& original,
        vector<char>& changes,
        vector<int>& cost
    ) {
        if (source.size() != target.size()) return -1;

        vector<pair<int,int>> adj[26];
        for (int i = 0; i < original.size(); i++) {
            adj[original[i] - 'a'].push_back({changes[i] - 'a', cost[i]});
        }

        vector<vector<int>> dist(26, vector<int>(26, INT_MAX));

        for (int i = 0; i < 26; i++) {
            dijkstra(i, adj, dist[i]);
        }

        long long ans = 0;
        for (int i = 0; i < source.size(); i++) {
            int u = source[i] - 'a';
            int v = target[i] - 'a';
            if (u == v) continue;
            if (dist[u][v] == INT_MAX) return -1;
            ans += dist[u][v];
        }

        return ans;
    }
};