class Solution {
public:
    static vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end()); 
        vector<int> m1(items.size());
        m1[0] = items[0][1];
        for (int i = 1; i < items.size(); i++)
            m1[i] = max(m1[i-1], items[i][1]);

        vector<int> a(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            int q = queries[i];
            vector<int> target={q, INT_MAX};
            int j = upper_bound(items.begin(), items.end(), target)-items.begin();
            if (j == 0) a[i] = 0;
            else a[i] = m1[j - 1];
        }

        return a;
    }
};