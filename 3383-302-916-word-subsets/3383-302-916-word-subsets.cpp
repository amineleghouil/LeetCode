class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char,int> req;        
        for(auto str : words2) {
            unordered_map<char,int> cur;
            for(char c : str) {
                cur[c]++;
                req[c] = max(req[c], cur[c]);
            }
        }
        
        vector<string> ans;        
        for(auto str : words1) {
            unordered_map<char,int> cur;
            for(char c : str) cur[c]++;
            
            bool ok = true;
            for(auto [ch,frq] : req)
                if(cur[ch] < frq) {
                    ok = false; 
                    break;
                }
            
            if(ok) ans.push_back(str);
        }
        return ans;
    }
};