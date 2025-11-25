class Solution {
public:
    string interpret(string s) {
        unordered_map<string, string> d = 
        {
            { "(al)" , "al"},
            { "()" , "o" }, 
            { "G" , "G" },
        };
        string tmp = "", res = "";
        for(char c: s){
            tmp+=c;
            if(d.find(tmp)!=d.end()){
                res += d[tmp] ;
                tmp = "" ;
            }
        }
        return res;
    }
};