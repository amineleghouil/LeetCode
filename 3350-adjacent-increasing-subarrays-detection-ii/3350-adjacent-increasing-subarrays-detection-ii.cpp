class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        int u = 1, pr = 0, res = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) u++;
            else {
                pr = u;
                u = 1;
            }
            int h = u >> 1;
            int m = min(pr, u);
            int c = max(h, m);
            if (c > res) res = c;
        }
        return res;
    }
};