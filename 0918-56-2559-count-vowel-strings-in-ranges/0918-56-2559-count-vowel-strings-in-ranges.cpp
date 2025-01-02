class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        const unsigned isVowel=1+(1<<('e'-'a'))+(1<<('i'-'a'))+(1<<('o'-'a'))+(1<<('u'-'a'));
        const int n=words.size(), qz=queries.size();
        vector<int> cnt(n+1, 0);
        for(int i=0; i<n; i++){
            string& w=words[i];
            cnt[i+1]=cnt[i]+(((1<<(w[0]-'a'))& isVowel) && ((1<<(w.back()-'a'))& isVowel));
        }
        vector<int> ans(qz, 0);
        int i=0;
        for(auto& q: queries){
            ans[i++]=cnt[q[1]+1]-cnt[q[0]];
        }
        return ans;
    }
};