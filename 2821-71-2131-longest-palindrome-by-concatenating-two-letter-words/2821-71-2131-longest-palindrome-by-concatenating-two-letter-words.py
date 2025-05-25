class Solution:
    def longestPalindrome(self, words: List[str]) -> int:
        h = {}
        for i in words:
            h[i] = h.get(i, 0) + 1

        s = 0
        used_center = False  

        for i, j in h.items():
            if i[::-1] in h:
                if i != i[::-1]:
                    m = min(h[i], h[i[::-1]])
                    s += m * 4
                    h[i] -= m
                    h[i[::-1]] -= m

    
        for i, j in h.items():
            if i[0] == i[1]:
                s += (j // 2) * 4
                h[i] %= 2  

        for i, j in h.items():
            if i[0] == i[1] and j == 1 and not used_center:
                s += 2
                used_center = True
                break

        return s
