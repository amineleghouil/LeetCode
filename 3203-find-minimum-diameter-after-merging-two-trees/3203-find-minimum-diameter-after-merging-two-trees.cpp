class Solution {
public:
    int dfs(vector<vector<int>>& adj, int node, int parent, int& diameter){
        int maxD1 = 0, maxD2 = 0;

        for(int nei : adj[node]) {
            if(nei != parent) {
                int depth = dfs(adj, nei, node, diameter);
                if (depth > maxD1) {
                    maxD2 = maxD1;
                    maxD1 = depth;
                } else if (depth > maxD2) {
                    maxD2 = depth;
                }
            }
        }
        diameter = max(diameter, maxD1 + maxD2);
        return maxD1 + 1; 
    }

    int treeDiameter(vector<vector<int>>& edges){
        if (edges.empty()) return 0;
        int n = edges.size() + 1;
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int dia = 0;
        dfs(adj, 0, -1, dia);
        return dia;
    }

    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int dia1 = treeDiameter(edges1);
        int dia2 = treeDiameter(edges2);

        int half1 = (dia1 + 1) / 2;
        int half2 = (dia2 + 1) / 2;

        return max({dia1, dia2, half1 + half2 + 1});
    }
};