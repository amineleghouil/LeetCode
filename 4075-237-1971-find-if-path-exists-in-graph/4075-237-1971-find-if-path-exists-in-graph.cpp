const int n1 = 2 * (1e5);
vector<int> g[n1];
bool vis[n1];

class Solution {
public:
    void dfs(int pos, int des) {
        vis[pos] = true;
        if (vis[des]) return;
        for (int i = 0; i < g[pos].size(); i++) {
            int x = g[pos][i];
            if (!vis[x]) {
                dfs(x, des);
            }
        }
    }

    
     bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    for (int i = 0; i < n; ++i) g[i].clear();  

    for (int i = 0; i < edges.size(); i++) {
        g[edges[i][0]].push_back(edges[i][1]);
        g[edges[i][1]].push_back(edges[i][0]); 
    }

    memset(vis, false, sizeof(vis));
    dfs(source, destination);
    return vis[destination];
}

};
