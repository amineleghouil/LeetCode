class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin() , capacity.end());
        int ans = 0, sum = 0;
        for(int i = 0; i < apple.size(); i++) sum += apple[i];
        for(int i = capacity.size() - 1; i >= 0; i--) {
            sum -= capacity[i];
            ans++;
            if(sum <= 0) return ans;
        }
        return ans;
    }
};