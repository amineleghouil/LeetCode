class Solution {
public:
    string predictPartyVictory(string s) {
        int r=0, d=0,totD=0,totR=0;
        queue<char> q;
        for (char &c : s){
            q.push(c);
            totD+=(c=='D');
            totR+=(c=='R');
        }
        while (totD && totR){
            if(q.front()=='D'){
                if(d){
                    d--;
                    totD--;
                    q.pop();
                }
                else{
                    q.push('D');
                    q.pop();
                    r++;
                }
            }
            else{
                if(r){
                    r--;
                    totR--;
                    q.pop();
                }
                else{
                    q.push('R');
                    q.pop();
                    d++;
                }
            }
        }
        return totR ? "Radiant" : "Dire";
    }
};