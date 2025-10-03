class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> arr;

        unordered_set<int> table(friends.begin(), friends.end());
        for (int i = 0; i < order.size(); i++) {
            if (table.find(order[i]) != table.end()) {
                arr.push_back(order[i]);
            }
        }

        return arr;
    }
};