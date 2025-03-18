class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        const int n=nums.size();
        int ans=0, B=0;
        for(int l=0, r=0; r<n; r++){
            int x=nums[r];
            while(l<r && (B& x)!=0) B^=nums[l++];
            B|=x;
            ans=max(ans, r-l+1);
        }
        return ans;
    }
};