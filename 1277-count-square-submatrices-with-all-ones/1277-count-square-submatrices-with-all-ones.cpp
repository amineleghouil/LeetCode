class Solution {
public:
    int countSquares(vector<vector<int>>& ma) {
        int n = ma.size();
        int m = ma[0].size();
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (ma[i][j] == 1 && i > 0 && j > 0) {
                    ma[i][j] = 1 + min({ma[i-1][j], ma[i][j-1], ma[i-1][j-1]});
                }
                ans += ma[i][j];
            }
        }
        return ans;
    }
};
