class Solution {
    vector<int> parent;
    vector<int> rank;

    int find(int i) {
        if (parent[i] != i)
            parent[i] = find(parent[i]); 
        return parent[i];
    }

    void join(int u, int v) {
        int rootU = find(u), rootV = find(v);
        if (rootU != rootV) {
            
            if (rank[rootU] > rank[rootV]) parent[rootV] = rootU;
            else if (rank[rootU] < rank[rootV]) parent[rootU] = rootV;
            else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }

public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        
    
        for (int i = 1; i <= n; i++) parent[i] = i;

        for (auto& edge : edges) {
            int u = edge[0], v = edge[1];
            if (find(u) == find(v)) return edge; 
            join(u, v); 
        }
        
        return {}; 
    }
};