class Solution {
public:
    string compressedString(string s) {
        vector<pair<char,char>> v;
        v.push_back({s[0],'1'});
        string s1="";
        int n=0;
        for(int i=1;i<s.size();++i){
            if(s[i]==v[n].first && v[n].second<'9')
            v[n].second++;
            else{
                s1.push_back(v[n].second);
                s1.push_back(v[n].first);
                v.push_back({s[i],'1'});
                n++;
            }
        }
        s1.push_back(v[n].second);
        s1.push_back(v[n].first);
        return s1;
    }
};