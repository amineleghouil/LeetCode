class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)m[arr[i]]++;
        unordered_map<int,int> m1;
        for(auto &a:m){
            m1[a.second]++;
            if(m1[a.second]>1)return false;
        }
        return true;
        
    }
};