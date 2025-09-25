class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        for (auto &customer : accounts) {
            int wealth = 0;
            for (auto money : customer) {
                wealth += money;
            }
            max_wealth= max(max_wealth, wealth); 
        }
        return max_wealth;
    }
};