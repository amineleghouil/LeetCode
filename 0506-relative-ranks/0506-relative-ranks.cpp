class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string>ans(n);
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }
        int i=1;
        while(!pq.empty()){
int temp=pq.top().second;
pq.pop();
if(i==1){
    ans[temp]="Gold Medal";}
    else if(i==2){
        ans[temp]="Silver Medal";
    }
else if(i==3){
    ans[temp]="Bronze Medal";
}
else{
    ans[temp]=to_string(i);
}
i++;
        }
        return ans;
    }
};