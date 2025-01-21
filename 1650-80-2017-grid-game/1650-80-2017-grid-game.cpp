class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long topSum = 0, botSum = 0, min2 = LLONG_MAX;
        for (int num : grid[0]) topSum += num;
        for (int col = 0; col < grid[0].size(); col++) {
            topSum -= grid[0][col];
            min2 = min(min2, max(topSum, botSum));
            botSum += grid[1][col];
        }
        return min2;
    }
};