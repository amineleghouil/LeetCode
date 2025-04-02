class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int i = 0;
        while (i < m.size() && m[i][0] <= target) ++i;
        i--;

        if (i < 0) return false;

        int l = 0, r = m[i].size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (m[i][mid] == target) return true;
            else if (m[i][mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        return false;
    }
};
