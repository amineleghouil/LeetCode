class Solution {
public:
    int maxFreeTime(int e, int k, vector<int>& v1, vector<int>& v2) {
        int s=0,n =v1.size();
        for(int i=0;i<n; i++){
            s+=v2[i]-v1[i];
        }
        return e-s;
    }
};