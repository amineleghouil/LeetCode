class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map <int,int> m;
        for (int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        if(m[0]>1) return true;
        else m[0]=0;
        for(int i=0;i<arr.size();++i){
            if(m[arr[i]*2])return true;
        }
        return false;
    }
};