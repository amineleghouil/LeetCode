class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_w =0;
        unordered_map<char,int> m;
        int l=0;
        for(int i=0; i<s.size();i++){
            m[s[i]]++;
            while(m[s[i]]>1){
                m[s[l]]--;
                l++;
            }
            max_w=max(max_w,i-l+1);
        }
        return max_w;
    }
};