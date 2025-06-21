class Solution {
public:
    int minimumDeletions(string word, int k) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }

        int minDel = INT_MAX;
        for (int base = 0; base < 26; base++) {
            if (freq[base] == 0)
                continue;

            int del = 0;
            int baseFreq = freq[base];

            for (int comp = 0; comp < 26; comp++) {
                if (freq[comp] == 0 || comp == base)
                    continue;

                int compFreq = freq[comp];
                if (compFreq < baseFreq) {
                    del += compFreq;
                } else if (compFreq - baseFreq > k) {
                    del += compFreq - baseFreq - k;
                }
            }

            minDel = min(minDel, del);
        }

        return minDel;
    }
};
