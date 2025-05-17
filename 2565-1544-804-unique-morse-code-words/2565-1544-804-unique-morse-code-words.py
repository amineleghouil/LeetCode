class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        l = [".-","-...","-.-.","-..",".","..-.","--.","....","..",
             ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
             "...","-","..-","...-",".--","-..-","-.--","--.."]
        dic = {}
        for i in words:
            c = ""
            for j in range (len(i)):
                c += l[ord(i[j]) - ord('a')]
            if c not in dic:
                dic[c] = 1
            else:
                dic[c] += 1
        return len(dic)
