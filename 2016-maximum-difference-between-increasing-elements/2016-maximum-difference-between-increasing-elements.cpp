class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int s = nums[1]-nums[0];
        int m=min(nums[1],nums[0]);
        for (int i=2;i<nums.size();++i){
            m=min(m,nums[i-1]);
            s=max(s,nums[i]-m);}
        return s>0 ? s :-1;
    }
};