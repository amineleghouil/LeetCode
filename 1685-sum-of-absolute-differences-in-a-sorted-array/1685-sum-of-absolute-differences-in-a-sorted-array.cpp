class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) nums[i] += nums[i-1];
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int current = nums[i];
            if (i) current -= nums[i-1];
            int leftSum = i ? nums[i-1] : 0;
            int rightSum = nums[n-1] - nums[i];
            v.push_back(i * current - leftSum + rightSum - (n - 1 - i) * current);
        }
        return v;
    }
};