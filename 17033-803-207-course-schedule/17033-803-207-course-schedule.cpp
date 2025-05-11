
class Solution {
public:
bool dfs(int pos,vector<int> g[],vector<int> &vis){
    if (vis[pos]==2)return true;
    if(vis[pos]==1)return false;
    vis[pos]=1;
    for(int i =0;i<g[pos].size();i++){
        if(!dfs(g[pos][i],g,vis))return false;
    }
    vis[pos]=2;
    return true;
}
    bool canFinish(int n, vector<vector<int>>& pr) {
        vector<int> g[n];
vector<int> vis(n);
        
        for (int i=0;i<n;i++)g[i].clear();
        for(int i=0;i<pr.size();i++){
           g[pr[i][0]].push_back(pr[i][1]);

        }
        for(int i=0;i<n;i++){
            if(!dfs(i,g,vis)) return false;
        }
        return true;
    }
};