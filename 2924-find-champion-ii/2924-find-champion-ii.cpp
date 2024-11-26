class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> a(n, 0);

        for (auto& d : edges) {
            a[d[1]]++;
        }

        int ans = -1;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                count++;
                ans = i;
            }
        }

        return count > 1 ? -1 : ans;
    }
};