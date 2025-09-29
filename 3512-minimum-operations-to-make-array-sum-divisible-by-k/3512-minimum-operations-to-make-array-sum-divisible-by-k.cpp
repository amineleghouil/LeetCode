class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n =0;
        for(int i=0;i<nums.size();++i)n+=nums[i];
        return n%=k;  
    }
};