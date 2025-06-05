
class Solution {
public:
    bool carPooling(vector<vector<int>>& v, int c) {
        const int N= 1e3+1;
        int cum[N]={0};
        for (auto a:v){
            cum[a[1]]+=a[0];
            cum[a[2]]-=a[0];
        }
        for (int i = 0;i<N;i++){
            if(i) cum[i]+=cum[i-1];
            if(cum[i]>c)return false ;
        }
        return true;
    }
};