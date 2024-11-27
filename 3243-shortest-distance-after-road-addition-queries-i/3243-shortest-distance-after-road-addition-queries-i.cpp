class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> adj[n];
        vector<int> dist(n);
        for(int i = 0; i < n-1; i++){
            adj[i].push_back(i+1);
        }
        for(int i = 0; i < n; i++){
            dist[i] = i;
        }
        queue<pair<int, int>> q;
        vector<int> ans;
        for(int i = 0; i < queries.size(); i++){
            adj[queries[i][0]].push_back(queries[i][1]);
            dist[queries[i][1]] = min(dist[queries[i][0]] + 1, dist[queries[i][1]]);
            q.push({queries[i][1], dist[queries[i][1]]});
            while(!q.empty()){
                int node = q.front().first;
                int dis = q.front().second;
                q.pop();
                for(auto it: adj[node]){
                    if(dist[it]>dis+1){
                        dist[it] = dis + 1;
                        q.push({it, dist[it]});
                    }
                }
            }
            ans.push_back(dist[n-1]);
        }
        return ans;
    }
};