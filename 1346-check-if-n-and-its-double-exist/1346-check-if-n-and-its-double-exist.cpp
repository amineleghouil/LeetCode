class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> m;
        for (int i = 0; i < arr.size(); i++) {
            if (m[arr[i] * 2] || (arr[i] % 2 == 0 && m[arr[i] / 2])) {
                return true;
            }
            m[arr[i]]++;
        }
        return false;
    }
};
