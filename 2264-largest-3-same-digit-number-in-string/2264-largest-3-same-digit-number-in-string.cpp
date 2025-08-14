class Solution {
public:
    string largestGoodInteger(string num) {
        int s = -1;
        for (int i = 0; i < num.size() - 2; ++i) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2])
                s = max(s, int(num[i]));
        }
        return s == -1 ? "" : string(3, char(s));
    }
};
