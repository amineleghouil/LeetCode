class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& v) {
        int mx =m,my = n;
        for (vector<int> &c : v) {
            mx = min(mx, c[0]);
            my = min(my, c[1]);
        }

        return mx*my;
    }
};