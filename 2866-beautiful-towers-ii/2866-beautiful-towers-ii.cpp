#define ll long long
class Solution {
public:
    long long maximumSumOfHeights(vector<int>& v) {
        stack<int> st;
        int n = v.size();
        ll ans = 0;
        vector<int> next(n, n);
        vector<int> prev(n, -1);
        
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && v[i] < v[st.top()]) {
                next[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty()) st.pop(); // ✅ clear stack before reuse

        for (int i = n - 1; i >= 0; --i) { // ✅ fix: must go until i >= 0
            while (!st.empty() && v[i] < v[st.top()]) {
                prev[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty()) st.pop();

        vector<ll> left(n);
        vector<ll> right(n);

        for (int i = 0; i < n; ++i) {
            left[i] = v[i];
            int id = prev[i];
            
            if (id != -1) 
                left[i] += left[id] + v[i] * 1ll * (i - id - 1);
            else 
                left[i] += v[i]*1ll*i;
        }

        for (int i = n - 1; i >= 0; --i) { 
            right[i] = v[i];
            int id = next[i];
            if (id != n)  
                right[i] += right[id];
            right[i] += v[i] * 1ll * (id - i - 1);
            ans = max(ans, right[i] + left[i] - v[i] * 1ll);
        }

        return ans;
    }
};
