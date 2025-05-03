class Solution {
public:
    int minDominoRotations(vector<int>& t, vector<int>& b) {
        int min1=1e5;
        for (int i=1;i<=6;i++){
            int s=0,v1=0;
            bool ok =true;
            for (int j=0;j<t.size();j++){
                if(t[j]!=i && b[j]!=i){ok=false;break;}
                if(t[j]!=i)s++;
                if(b[j]!=i)v1++;
            }
            if (ok)min1=min(s,min(min1,v1));
        }
        return (min1==1e5)?-1:min1;
    }
};