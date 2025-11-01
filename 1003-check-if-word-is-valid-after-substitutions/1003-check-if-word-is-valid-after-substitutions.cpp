class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        for (int i = 0; i < s.size(); i++) st.push(s[i]); 
        stack<char> temp;
        while (!st.empty()) {
            char c = st.top();
            st.pop();
            temp.push(c);
        }
        while (!temp.empty()) {
            char c = temp.top();
            temp.pop();
            if (c == 'c') {
                if (st.size() >= 2) {
                    char b = st.top(); st.pop();
                    char a = st.top(); st.pop();
                    if (a != 'a' || b != 'b') return false;
                } else return false;
            } else st.push(c);
        }
        return st.empty();
    }
};
