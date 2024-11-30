class Solution {
public:
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        unordered_map<int, int> deg;
        unordered_map<int, vector<int>> mp;

        for(vector<int> &v : pairs){
            deg[v[0]]++;
            deg[v[1]]--;
            mp[v[0]].push_back(v[1]);

            if(mp.find(v[1]) == mp.end())
                mp.insert({v[1], {}});
        }

        int start=0, big = INT_MIN;
        for(auto it : deg)
        {
            if(big < it.second && it.second >= 0)
            {
                big = it.second;
                start = it.first;
            }
        }
        stack<int> s, ckt;
        s.push(start);
        int temp=start;

        while(!s.empty())
        {
            temp = s.top();
            s.push(mp[temp].back());
            mp[temp].pop_back();

            while(!s.empty() && mp[s.top()].size() == 0)
            {
                ckt.push(s.top());
                s.pop();
            }
        }
        vector<vector<int>> v;
        int a = ckt.top();
        ckt.pop();
        while(!ckt.empty())
        {
            v.push_back({a, ckt.top()});
            a = ckt.top();
            ckt.pop();
        }

        return v;
    }
};