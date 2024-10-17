class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        string s1=to_string(num);
        sort(s1.begin(),s1.end());
        reverse(s1.begin(),s1.end());
        if (s==s1)
            return num;
        int i;
        for (i=0;i<s.size();i++){
            if(s[i]!=s1[i])
            break;
        }
        char c = s[i];
        int j = s.size() - 1;
        while (j > i && s[j] != s1[i]) 
            j--;
        s[j] = c;
        s[i] = s1[i];
        return stoi(s);
    }
};