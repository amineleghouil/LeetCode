class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        if (d[d.size() - 1] != 9) {
            d[d.size() - 1] += 1;
        } else {
            
            int n = d.size() - 1;
            while (n >= 0 && d[n] == 9) {
                d[n] = 0;
                n--;
            }
            if (n >= 0) d[n] += 1;
            else {d[0] = 1;d.push_back(0);}
        }
        return d;
    }
};
