class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int tar, int idx=0, int currSum=0) {
        if (idx == nums.size()) {
            return (currSum == tar) ? 1 : 0;
        }
        int add = findTargetSumWays(nums, tar, idx + 1, currSum + nums[idx]);
        int sub = findTargetSumWays(nums, tar, idx + 1, currSum - nums[idx]);
        return add + sub;
    }
};