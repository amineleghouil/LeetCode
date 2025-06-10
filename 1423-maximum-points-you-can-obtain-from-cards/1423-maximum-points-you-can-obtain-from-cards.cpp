class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n = v.size();
        for (int i = 1; i < n; i++) v[i] += v[i - 1] ; 
        int maxi = 0;
        for (int i = 0; i <= k; i++) {
            int res = 0;
            if (k - i > 0) 
                res = v[n - 1] - (n - k + i > 0 ? v[n - k + i - 1] : 0); 
            if (i) 
                res += v[i - 1]; 
            maxi = max(maxi, res);
        }
        return maxi;
    }
};