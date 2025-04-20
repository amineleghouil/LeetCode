class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> m;
        for (int a : answers) {
            m[a]++;
        }
        int s = 0;
        for (auto& p : m) {
            int gs = p.first + 1;
            int g = (p.second + gs - 1) / gs;
            s += g * gs;
        }
        return s;
    }
};
