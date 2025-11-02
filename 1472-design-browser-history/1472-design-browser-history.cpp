class BrowserHistory {
public:
    stack<string> curr ; 
    stack<string> next;
    BrowserHistory(string homepage) {
        this->curr.push(homepage);
    }
    
    void visit(string url) {
        this->curr.push(url);
        this->next = stack<string>();
    }
    
    string back(int steps) {
        while(steps-- && this->curr.size() > 1){
            this->next.push(this->curr.top());
            this->curr.pop();
        }
        return this->curr.top();
    }
    
    string forward(int steps) {
        while(steps-- && this->next.size() ){
            this->curr.push(this->next.top());
            this->next.pop();
        }
        return this->curr.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */