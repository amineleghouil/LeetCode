class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        int s=0;
        for(int i=0;i<nums.size();++i){
            m[nums[i]]++;
            if(m[nums[i]]<=2){
                nums[s]=nums[i];
                s++;
            }
        }
        return s;
    }
};