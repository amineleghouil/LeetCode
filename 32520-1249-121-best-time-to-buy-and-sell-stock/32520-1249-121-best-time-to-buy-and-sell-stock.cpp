class Solution {
public:
    int maxProfit(vector<int>& v) {
        int min1=v[0],max1=0;
        for(int i=1;i<v.size();++i){
            if(v[i]<min1){
                min1=v[i];
            }
            else{
                max1=max(max1,v[i]-min1);
            }
        }
        return max1;
    }
};