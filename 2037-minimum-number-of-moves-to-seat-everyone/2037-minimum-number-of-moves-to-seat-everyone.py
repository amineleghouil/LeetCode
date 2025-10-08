class Solution:
    def minMovesToSeat(self, se: List[int], st: List[int]) -> int:
        se.sort()
        st.sort()
        s=0
        for i in range (len(st)):
            s+=abs(se[i]-st[i])
        return s 