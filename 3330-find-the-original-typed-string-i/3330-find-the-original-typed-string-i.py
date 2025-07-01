class Solution:
    def possibleStringCount(self, s:str)->int :
        n=len(s)
        c=1
        for i in range(n-1) :
            if s[i]==s[i+1]:
                c+=1
        return c
        