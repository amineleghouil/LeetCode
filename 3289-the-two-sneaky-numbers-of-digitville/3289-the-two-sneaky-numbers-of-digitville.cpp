class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map <int,int> m;
        vector<int> res;
        for(int i =0;i<nums.size();++i){
            m[nums[i]]++;if(m[nums[i]]>1)res.push_back(nums[i]);
        }
        return res ;
    }
};