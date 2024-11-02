class Solution {
public:
    string convert(string s, int n) {
        if (n>=s.size() || n==1){
            return s;
        }
        vector<vector<char>> v;
        for(int i =0;i<n;++i){
            vector<char> v1;
            v1.push_back(s[i]);
            v.push_back(v1);
        }
        int k=-1;
        int s1=n-1;
        for (int i=n;i<s.size();++i){
            s1=s1+k;
            v[s1].push_back(s[i]);
            if(s1==n-1)
            k=-1;
            if(s1==0)
            k=1;
        }
        string s2="";
        for(int i=0;i<n;i++){
            for (int j=0;j<v[i].size();++j){
                s2.push_back(v[i][j]);
            }
        }
        return s2;
    }
};