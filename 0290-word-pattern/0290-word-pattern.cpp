class Solution {
public:
    bool wordPattern(string p, string s) {
        stringstream s1(s);
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;
        int i = 0;
        string w;
        while (s1 >> w) {
            if (i >= p.size()) return false;
            char c = p[i];
            if (m1.count(c) == 0 && m2.count(w) == 0) {
                m1[c] = w;
                m2[w] = c;
            } else {
                if (m1[c] != w || m2[w] != c) return false;
            }
            i++;
        }
        return i == p.size();
    }
};
