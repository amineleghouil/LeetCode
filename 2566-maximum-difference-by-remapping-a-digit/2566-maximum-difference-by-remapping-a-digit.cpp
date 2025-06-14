class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        char ch = 0;
        for (char c : s) if (c != '9') { ch = c; break; }
        string mx;
        if (ch) {
            for (char c : s) mx.push_back(c == ch ? '9' : c);
        } else {
            mx = s;
        }
        char ch0 = s[0];
        string mn;
        for (char c : s) mn.push_back(c == ch0 ? '0' : c);
        return stoi(mx) - stoi(mn);
    }
};