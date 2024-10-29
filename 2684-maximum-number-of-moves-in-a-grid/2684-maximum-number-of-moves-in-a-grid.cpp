class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int res = 0;
        vector<int> dp(m);
        
        for (int j = 1; j < n; ++j) {
            int l = 0;
            bool f = false;
            
            for (int i = 0; i < m; ++i) {
                int cur = -1;
                int nx = dp[i];
                
                if (i - 1 >= 0 && l != -1 && grid[i][j] > grid[i - 1][j - 1]) {
                    cur = max(cur, l + 1);
                }
                
                if (dp[i] != -1 && grid[i][j] > grid[i][j - 1]) {
                    cur = max(cur, dp[i] + 1);
                }
                
                if (i + 1 < m && dp[i + 1] != -1 && grid[i][j] > grid[i + 1][j - 1]) {
                    cur = max(cur, dp[i + 1] + 1);
                }
                
                dp[i] = cur;
                f = f || (dp[i] != -1);
                l = nx;
            }
            
            if (!f) break;
            res = j;
        }
        
        return res;
    }
};