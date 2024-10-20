class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> optr, operend;
        for (int i = 0; i < expression.size(); ++i) {
            if (expression[i] == '&' || expression[i] == '|' || expression[i] == '!') 
                optr.push(expression[i]);
            else if (expression[i] == 't' || expression[i] == 'f' || expression[i] == '(') 
                operend.push(expression[i]);
            else if (expression[i] == ')') {
                bool ans;
                if (optr.top() == '&') {
                    ans = true;
                    while (operend.top() != '(') {
                        ans &= (operend.top() == 't');
                        operend.pop();
                    }
                } else if (optr.top() == '|') {
                    ans = false;
                    while (operend.top() != '(') {
                        ans |= (operend.top() == 't');
                        operend.pop();
                    }
                } else {
                    ans = !(operend.top() == 't');
                    operend.pop();
                }
                operend.pop(); 
                optr.pop(); 
                operend.push(ans == true ? 't' : 'f');
            }
        }
        return operend.top() == 't';
    }
};
