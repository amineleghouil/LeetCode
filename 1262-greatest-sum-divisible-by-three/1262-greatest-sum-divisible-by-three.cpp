class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> g[2];
        g[0] = {0};
        g[1] = {0};
        
        int sum = 0;
        for(auto x : nums){
            sum += x;
            if(x % 3 == 1 && g[0].size() < 3) g[0].push_back(x);
            if(x % 3 == 2 && g[1].size() < 3) g[1].push_back(x);
        }
        int ans = 0;

        int s1 = 0;
        for(auto p : g[0]){
            s1 += p;
            int s2 = 0;
            for(auto q : g[1]){
                s2 += q;
                if((sum - s1 - s2) % 3 == 0){
                    ans = max(ans, sum - s1 - s2);
                }
            }
        }
        return ans;
    }
};