class Solution {
public:
    int numJewelsInStones(string j, string s) {
        unordered_map<char,int> m;
        for(int i=0;i<j.size();i++)m[j[i]]++;
        int a=0;for(int i=0;i<s.size();i++)if(m[s[i]])a++;
        return a;
    }
};