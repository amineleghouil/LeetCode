class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector <int> v (nums.size());
        int x=0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
            v[(nums.size())-1-i] = x ^ ((1 << maximumBit) - 1);
        }
        return v;
    }
};