class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min1= INT_MAX;
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(min1>abs(nums[i]) || (min1==abs(nums[i]) && nums[i]>0)){
                min1=abs(nums[i]);
                j=i;
            }
        }
        return nums[j];
    }
};