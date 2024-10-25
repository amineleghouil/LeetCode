class Solution:
    def removeSubfolders(self, f: List[str]) -> List[str]:
        f.sort()
        rs = []
        rs.append(f[0]) 
        i = 0
        for j in range(1, len(f)):
            if f[j].find(f[i]) == 0 and f[j][len(f[i])] == '/':
                continue
            rs.append(f[j]) 
            i = j
        return rs
