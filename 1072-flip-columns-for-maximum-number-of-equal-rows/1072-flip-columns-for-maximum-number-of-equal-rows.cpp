class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int a = 0; 
        map<vector<int>, int> mp; 
        for (auto vec : matrix) {
            int x = vec[0] == 1; 
            for (int i = 0; i < vec.size(); ++i)
                vec[i] = x ^ vec[i]; 
            mp[vec]++; 
        }

        for (auto &x : mp)
            a = max(a, x.second);

        return a;
    }
};