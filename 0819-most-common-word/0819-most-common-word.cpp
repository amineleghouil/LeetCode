class Solution {
public:
    string mostCommonWord(string p, vector<string>& v) {
        unordered_map<string, int>m;
        for(int i = 0; i < p.size();){
            string s = "";
            while(i < p.size() && isalpha(p[i])) s.push_back(tolower(p[i++]));
            while(i < p.size() && !isalpha(p[i])) i++;
            m[s]++;
        }
        for(auto x: v) m[x] = 0;
        string res = "";
        int count = 0;
        for(auto x: m)
            if(x.second > count) res = x.first, count = x.second;
        return res;  
    }
};