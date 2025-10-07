class Solution:
    def mostWordsFound(self, se: List[str]) -> int:
        s=0
        for i in range(len(se)):
            s=max(s,(se[i].count(' '))+1)
        return s 