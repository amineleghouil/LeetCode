class Solution {
public:
    string getHappyString(int n, int k) {
        if(k>(3<<(n-1))) return "";
        queue<string> q;
        q.push("");
        while(k){
            string temp=q.front();
            q.pop();
            for(char i='a';i<='c';i++){
                if(temp.empty() || temp.back()!=i){
                    q.push(temp+i);
                    if(temp.size()+1==n) k--;
                }
                if(k==0) break;
            }
        }
        return q.back();
    }
};