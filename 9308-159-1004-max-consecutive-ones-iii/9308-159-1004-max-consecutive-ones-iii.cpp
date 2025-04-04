class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),l=0,max_w=0,n1=0;
        for(int r=0 ; r< n ; r++){
            if(nums[r]==0)n1++;
            while (n1>k){
                if(nums[l]==0)n1--;
                l++;
            }
            max_w=max(max_w,r-l+1);
        }
        return max_w;
    }
};