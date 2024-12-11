class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0; 
        int maxi = 0;
        for (int j = 0; j<n; ++j) {
            while (nums[j]-nums[i]>2*k) {
                i++;
            }
            maxi = max(maxi,j-i+1);
        }
        return maxi;
    }
};
