class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int c) {
        int a= *max_element(v.begin(), v.end());
        vector<bool> n;
        for(int i=0;i<v.size();i++){
            if(v[i]+c>=a){
            n.push_back(true);
            continue;
            }
            n.push_back(false);
        }
        return n;
    }
};