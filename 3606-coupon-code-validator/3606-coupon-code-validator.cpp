class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {

        unordered_map<string, int> priority;
        priority["electronics"] = 0;
        priority["grocery"] = 1;
        priority["pharmacy"] = 2;
        priority["restaurant"] = 3;

        vector<pair<string, string>> valid;
        regex pattern("^[A-Za-z0-9_]+");

        for (int i = 0; i < code.size(); i++) {
            if (isActive[i] && priority.count(businessLine[i]) && regex_match(code[i], pattern)) {
                valid.push_back({code[i], businessLine[i]});
            }
        }

        sort(valid.begin(), valid.end(), [&](auto &a, auto &b) {
            if (priority[a.second] != priority[b.second])
                return priority[a.second] < priority[b.second];
            return a.first < b.first;
        });

        vector<string> ans;
        for (auto &p : valid) {
            ans.push_back(p.first);
        }

        return ans;
    }
};