class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxi=0;
        for(int i=0;i<k;++i)maxi+=nums[i];
        int n=nums.size();
        int s=maxi;
        for(int i=k;i<=n-1;i++){
            s=s-nums[i-k]+nums[i];
            maxi = max(maxi,s);
        }
        return (double)maxi/k;
    }
};