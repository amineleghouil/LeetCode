class Solution {
public:
    int countStudents(vector<int>& v1, vector<int>& v2) {
        queue<int> q1,q2;
        int n =v1.size();
        for(int i = 0;i<n;i++){
            q1.push(v1[i]);
            q2.push(v2[i]);
        }
        int i=0;
        while(!q1.empty() && !q2.empty()){
            i++;
            if(q1.front()==q2.front())
            {
                q1.pop();
                q2.pop();
                i=0;
            }
            else
            {
                q1.push(q1.front());
                q1.pop();
            }
            if(i>=n)break;
        }
        return q1.size();
    }
};