class Solution {
public:
    string compressedString(string s) {
        vector<pair<char,char>> v;
        v.push_back({s[0],'1'});
        int n=0;
        for(int i=1;i<s.size();++i){
            if(s[i]==v[n].first && v[n].second<'9')
            v[n].second++;
            else{
                v.push_back({s[i],'1'});
                n++;
            }
        }
        string s1="";
        for(int i=0;i<=n;i++){
            s1.push_back(v[i].second);
            s1.push_back(v[i].first);
        }
        return s1;
    }
};