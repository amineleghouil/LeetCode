class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        int ans = -1;
        int cs = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                cs += nums[i];
            } else {
                ans = max(ans, cs + nums[i]);
                cs = 0;
                ans = max(ans, nums[i]);
            }
        }
        if (nums[nums.size() - 1] > nums[nums.size() - 2]) {
            ans = max(ans, cs + nums[nums.size() - 1]);
            ans = max(ans, nums[nums.size() - 1]);
        }
        return ans;
    }
};