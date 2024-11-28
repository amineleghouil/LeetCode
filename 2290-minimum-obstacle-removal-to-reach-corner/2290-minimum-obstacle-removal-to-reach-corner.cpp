class Solution {
public:
    bool isValid(int row, int col, int n, int m){
        if(row < 0 || row >= n || col < 0 || col >= m){
            return false;
        }
        return true;
    }

    int minimumObstacles(vector<vector<int>>& grid) {
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,greater<pair<int, pair<int, int>>>> q;

        q.push({grid[0][0], {0, 0}});

        dist[0][0] = grid[0][0];

        while(!q.empty()){

            int steps = q.top().first;
            int x     = q.top().second.first;
            int y     = q.top().second.second;
            q.pop();

            if(x == n-1 && y == m-1){
                return steps;
            }

            for(auto &dir: directions){

                int nx = x + dir[0];
                int ny = y + dir[1];

                if(isValid(nx, ny, n, m) && dist[nx][ny] > steps + grid[nx][ny]){
                    dist[nx][ny] = steps + grid[nx][ny];

                    q.push({dist[nx][ny], {nx, ny}});
                }

            }
        }

        return -1;
    }
};