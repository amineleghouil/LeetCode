class Solution {
public:
    bool isTrionic(vector<int>& v) {
        if(v[0]>=v[1])return false ;
        int i= 1,n=v.size()-1;
        while (i < n && v[i]<v[i+1]){
            ++i; 
        }
        if (i==n)return false;
        while (i < n && v[i]>v[i+1]){
            ++i; 
        }
        if (i==n)return false;
        while (i < n && v[i]<v[i+1]){
            ++i; 
        }
        return i==n;
    }
    
};