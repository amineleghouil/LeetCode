class Solution {
public:
    string removeOccurrences(string s, string part) {
        int partLen = part.size();
        string result;
        for (char c : s) {
            result.push_back(c);
            if (result.size() >= partLen && result.substr(result.size() - partLen) == part) {
                result.erase(result.size() - partLen, partLen);
            } }
        return result;
    } };