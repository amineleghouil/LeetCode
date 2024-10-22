class Solution:
    def reverse(self, x: int) -> int:
        ok = x>=0
        x=abs(x)
        s=int(str(x)[::-1])
        if(s> 2**31-1):
            return 0
        if ok:
            return int(s)
        return -1*(int(s))
            
