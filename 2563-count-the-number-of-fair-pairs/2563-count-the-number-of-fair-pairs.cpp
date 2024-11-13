class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long s = 0;  
        for (int i = 0; i < nums.size() - 1; ++i) {
            int lo = lower_bound(nums.begin()+i+1, nums.end(), lower - nums[i]) - nums.begin();
            int upp = upper_bound(nums.begin()+i+1, nums.end(), upper - nums[i]) - nums.begin();
            if (upp > lo) 
            s += upp - lo;
            }
        
        return s;
    }
};
