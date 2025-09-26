class Solution {
private:
    string toBinary(int num) {
        string res;
        while (num > 0) {
            res = char('0' + (num % 2)) + res;
            num /= 2;
        }
        return res.empty() ? "0" : res;
    }
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));
    
        return toBinary(year) + "-" + toBinary(month) + "-" + toBinary(day);
    }
};