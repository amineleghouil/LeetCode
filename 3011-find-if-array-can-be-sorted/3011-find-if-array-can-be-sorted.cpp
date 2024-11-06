class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size(), t = 0, b = __builtin_popcount(nums[0]);
        for(int i = 1 ; i < n ; i++){
            int x =  __builtin_popcount(nums[i]);
            if(x != b){
                sort(nums.begin() + t, nums.begin() + i);
                t = i;
                b = x;
            }
        }
        if(t != n - 1)
            sort(nums.begin() + t, nums.end());
        return is_sorted(nums.begin(), nums.end());
    }
};