class Solution {
public:
    vector<vector<int>>vis,grd;
    vector<int>sz;
    int id,n,m,dx[4]{1,-1,0,0},dy[5]{0,0,1,-1};

    bool valid(int i,int j){
        return (min(i,j)>=0&&i<n&&j<m);
    }

    void dfs(int i,int j){
        vis[i][j]=id,
        sz[id]++;

        for(int k=0;k<4;k++){
            int a=i+dx[k],b=dy[k]+j;

            if(valid(a,b)&&grd[a][b]&&!vis[a][b])
                dfs(a,b);
        }
    }

    int largestIsland(vector<vector<int>>& grid) {
        n=grid.size(),m=grid[0].size();

        vis=vector<vector<int>>(n,vector<int>(m));
        sz=vector<int>(n*m+1);
        grd=grid;

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]&&!vis[i][j]){
                    id++;
                    dfs(i,j);
                }

        int ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j])
                    ans=max(ans,sz[vis[i][j]]);
                else{
                    set<int>s;

                    for(int k=0;k<4;k++){
                        int a=i+dx[k],b=dy[k]+j;

                        if(valid(a,b))
                            s.insert(vis[a][b]);
                    }

                    int sm=0;
                    for(auto k:s)
                        sm+=sz[k];

                    ans=max(ans,sm+1);
                }

        return ans;
    }
};