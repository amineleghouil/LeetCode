class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<nums.size();i++){
            if((nums[nums.size()-1]-nums[i])==((i==0)?0:nums[i-1]))return i;
        }
        return -1;
    }
};
