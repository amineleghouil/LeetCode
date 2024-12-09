class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& q) {
        vector<int> fal;
        for (int i = 0; i < nums.size() - 1; i++) {
            int b1 = nums[i] & 1, b2 = nums[i + 1] & 1;
            if (b1 == b2) {
                fal.push_back(i);
            }
        }

        vector<bool> res(q.size(), true);
        if (fal.empty()) return res;

        for (int i = 0; i < q.size(); i++) {
            int s = q[i][0], e = q[i][1];

            if (s != e) {
                auto it = lower_bound(fal.begin(), fal.end(), s);
                if (it != fal.end() && *it < e) {
                    res[i] = false;
                }
            }
        }

        return res;
    }
};