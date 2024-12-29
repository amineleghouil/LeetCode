class Solution {
public:
    vector<vector<int>> A; 
    vector<vector<int>> dp; 
    const int mod = 1e9 + 7;
    int F(int i, int j, string &T, vector<string> &W) {
        if (j == T.size()) {
            return 1; 
        }
        if (i == A.size()) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j]; 
        }
        long long count = F(i + 1, j, T, W);
        count %= mod;
        count += (1LL * A[i][T[j] - 'a'] * F(i + 1, j + 1, T, W)) % mod;
        count %= mod;
        return dp[i][j] = count;
    }

    int numWays(vector<string>& W, string T) {
        int n = W.size();
        int m = W[0].size();
        A = vector<vector<int>>(m, vector<int>(26, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                A[j][W[i][j] - 'a']++;
            }
        }
        dp = vector<vector<int>>(m, vector<int>(T.size(), -1));
        return F(0, 0, T, W);
    }
};