class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start,end;
        for(int i=0;i<intervals.size();++i){
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int res=0,e=0;
        for(int c : start){
            if (c>end[e])
            e++;
            else
                res++;
            
        }
        return res;
    }
};