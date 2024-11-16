class Solution {
public:
    int fn(vector<int>& nums, int deb,int fin){
        if(!is_sorted(nums.begin()+deb,nums.begin()+fin))return -1;
        for(int i=deb+1;i<fin;i++)
        if(nums[i]!=nums[i-1]+1)return -1;
        return nums[fin-1];
    }
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> result;
        for(int i=0;(i+k-1)<nums.size();i++){
            result.push_back(fn(nums,i,i+k));
        }
        return result;
    }
};