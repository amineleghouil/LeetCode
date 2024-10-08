class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int p) {
        unordered_map <int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=i+1;
        }
        vector<int> n;
        for(int i=0;i<nums.size();i++){
            if(m[p-nums[i]] && m[p-nums[i]]!=i+1){
            n.push_back(i);
            n.push_back(m[p-nums[i]]-1);
            break;}
        }
        return n;
        
    }
};