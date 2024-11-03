class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)
        return true;
        int a=s.size(),i=1;
        while (i<a){
            s=s.substr(1,a)+s[0];
            if(s==goal){
                return true;
            }
            i++;
        }
        return false;
    }
};