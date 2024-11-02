class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        string word = "";
        for (char ch : sentence) {
            if (ch == ' ') {
                words.push_back(word);
                word.clear();
            } else {
                word.push_back(ch);
            }
        }
        words.push_back(word);
        for (int i = 0; i < words.size() - 1; i++) {
            if (words[i].back() != words[i + 1][0]) {
                return false;
            }
        }
        return words.back().back() == words[0][0];
    }
};
