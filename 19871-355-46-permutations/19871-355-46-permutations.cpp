class Solution {
public:
    void backtrack(int a, int s, vector<vector<int>> &res, vector<int> &l, vector<int>& n) {
        if (a == s) {
            res.push_back(l);
            return;
        }
        for (int i = a; i < s; ++i) {
            swap(n[a], n[i]);
            l.push_back(n[a]);
            backtrack(a + 1, s, res, l, n);
            l.pop_back();
            swap(n[a], n[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> l;
        backtrack(0, nums.size(), res, l, nums);
        return res;
    }
};
