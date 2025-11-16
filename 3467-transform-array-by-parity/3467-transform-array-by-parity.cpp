class Solution {
public:
    vector<int> transformArray(vector<int>& v) {
        int j = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] % 2 == 0) {
                v[j++] = 0;
            }
        }
        while (j < v.size()) {
            v[j++] = 1;
        }
        return v;
    }
};