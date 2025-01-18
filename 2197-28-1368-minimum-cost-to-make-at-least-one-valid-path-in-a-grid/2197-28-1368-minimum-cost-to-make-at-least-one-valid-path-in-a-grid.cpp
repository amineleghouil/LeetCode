const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        vector<vector<int>> dist(r, vector<int>(c, INT_MAX));
        deque<pair<int, int>> dq;
        dq.emplace_front(0, 0);
        dist[0][0] = 0;
        
        while (!dq.empty()) {
            auto [x, y] = dq.front(); dq.pop_front();
            for (int i = 0; i < 4; ++i) {
                int nx = x + dx[i], ny = y + dy[i];
                if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
                    int cost = (i + 1 == grid[x][y]) ? 0 : 1;
                    if (dist[x][y] + cost < dist[nx][ny]) {
                        dist[nx][ny] = dist[x][y] + cost;
                        if (cost == 0) {
                            dq.emplace_front(nx, ny);
                        } else {
                            dq.emplace_back(nx, ny);
                        }
                    }
                }
            }
        }
        return dist[r-1][c-1];
    }
};