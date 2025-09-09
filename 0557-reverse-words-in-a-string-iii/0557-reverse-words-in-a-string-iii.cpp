class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        vector<std::string> words;
        string word;
        while (iss >> word) {
            reverse(word.begin(), word.end());
            words.push_back(word);
        }
        string result = "";
        for (const string& reversedWord : words) {
            result += reversedWord + " ";
        }
        result.pop_back();  
        return result;        
    }
};