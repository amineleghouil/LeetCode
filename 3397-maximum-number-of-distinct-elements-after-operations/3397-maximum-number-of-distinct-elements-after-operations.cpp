class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        long long  prev=LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            long long curr_min=1LL*(nums[i]-k);
            long long curr_max=1LL*(nums[i]+k);
            if(prev==curr_max) continue;
            ans++;
            if(prev<curr_min){
                prev=curr_min;
                continue;
            } 
            prev++;
        }
        return ans;
    }
};