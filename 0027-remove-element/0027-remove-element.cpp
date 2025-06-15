class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s =0;
        for(int i=0;i<nums.size();++i){
            if(val!=nums[i]){
            nums[s]=nums[i];
            s++;}
        }
        return s;
    }
};