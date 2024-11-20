class Solution {
 public:
  int takeCharacters(string s, int k) {
     
    int n = s.length(),ans = n;
    vector<int> v(3);
    for (const char c : s)
      v[c - 'a']++;
    if (v[0] < k || v[1] < k || v[2] < k)
      return -1;
    for (int l = 0, r = 0; r < n; ++r) {
      v[s[r] - 'a']--;
      while (v[s[r] - 'a'] < k)
        v[s[l++] - 'a']++;
      ans = min(ans, n - (r - l + 1));
    }
    return ans;
  }
};