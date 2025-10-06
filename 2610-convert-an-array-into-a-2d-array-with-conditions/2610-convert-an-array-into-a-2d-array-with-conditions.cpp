class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nu) {
        int mx = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < nu.size(); i++) {
            mx = max(mx, ++m[nu[i]]);
        }
        vector<vector<int>> res(mx);
        for (auto &a : m) {
            for (int i = 0; i < a.second; i++) res[i].push_back(a.first);
        }
        return res;
    }
};
