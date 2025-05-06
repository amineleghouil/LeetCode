class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        v.push_back({nums[0], 1});
        int j = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                v.push_back({nums[i], 1});
                j++;
                continue;
            }
            v[j][1]++;
        }
        sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        });
        vector<int> v1;
        int i = 0;
        while (k--) {
            v1.push_back(v[i][0]);
            i++;
        }
        return v1;
    }
};
