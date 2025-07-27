class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt = 0;
        int j = 0;
        int n = nums.size();
        for (int i = 1; i < n - 1; i++)
            if ((nums[j] < nums[i] && nums[i] > nums[i + 1]) ||
                (nums[j] > nums[i] && nums[i] < nums[i + 1])) {
                cnt++;
                j = i;
            }
        return cnt;
    }
};