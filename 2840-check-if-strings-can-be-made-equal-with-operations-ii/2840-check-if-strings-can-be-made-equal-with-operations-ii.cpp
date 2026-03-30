class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int> evenfreq1(26, 0);
        vector<int> oddfreq1(26, 0);
        vector<int> evenfreq2(26, 0);
        vector<int> oddfreq2(26, 0);
        
        for(int i = 0; i < s1.length(); i++) {
            if(i % 2 == 0) {
                evenfreq1[s1[i] - 'a']++;
                evenfreq2[s2[i] - 'a']++;
            } else {
                oddfreq1[s1[i] - 'a']++;
                oddfreq2[s2[i] - 'a']++;
            }
        }
        
        for(int i = 0; i < 26; i++) {
            if(evenfreq1[i] != evenfreq2[i] || 
                oddfreq1[i] != oddfreq2[i]) {
                return false;
            }
        }
        return true;
    }
};