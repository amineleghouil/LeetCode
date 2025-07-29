class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;
        int n = candyType.size();
        for(auto x:candyType)
            mp[x]++;
        return min((n/2),(int)(mp.size()));  
    }
};