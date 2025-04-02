class Solution {
public:
    int findMin(vector<int>& nums) {
        int n =nums.size();
        int l=0,r=n-1;
        while (l<r){
            int mid = (r-l)/2 + l;
            if (nums[mid]>nums[r])l=mid+1;
            else r=mid;
        }
        return nums[l];
    }
};