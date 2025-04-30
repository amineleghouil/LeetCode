class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i=0;
        for(int &x:nums){
            int a=ceil(log10(x+1));
            if (a%2==0)++i;
        }
        return i;
    }
};