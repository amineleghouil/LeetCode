class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> m;
        for (int a : answers) {
            m[a]++;
        }
        int total = 0;
        for (auto& p : m) {
            int group_size = p.first + 1;
            int groups = (p.second + group_size - 1) / group_size;
            total += groups * group_size;
        }
        return total;
    }
};
