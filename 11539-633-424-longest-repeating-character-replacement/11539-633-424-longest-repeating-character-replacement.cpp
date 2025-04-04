class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi=0,l=0;
        vector<int> v(26);
        for (int r=0;r<s.size();r++){
            v[((int)s[r])-65]++;
            while((r-l+1)-(*max_element(v.begin(),v.end()))>k){
                v[((int)s[l])-65]--;
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};