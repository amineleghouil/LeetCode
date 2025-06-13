class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                m=max(m,b);
                b=0;
                continue;
            }
            b++;
        }
        return max(m,b);
    }
};