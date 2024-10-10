class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> m;
        int n = nums.size();
        int r = 0;
        for (int i = 0; i < n; ++i) {
            if (m.empty() || nums[m.top()] > nums[i]) {
                m.push(i);
            }
        }
        for (int j = n - 1; j >= 0; --j) {
            while (!m.empty() && nums[j] >= nums[m.top()]) {
                r = max(r, j - m.top());
                m.pop();
            }
        }
        return r;
    }
};