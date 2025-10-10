class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m ; 
        int s=0;
        for(int i =0;i<nums.size();++i){s+=m[nums[i]];m[nums[i]]++;}
        return s; 
    }
};