class Solution:
    def setZeroes(self, mx: List[List[int]]) -> None:
        m,n =len(mx),len(mx[0])
        l=[]
        for i in range (m):
            for j in range(n):
                if(mx[i][j]==0):
                    l.append([i,j])
        for x in range(len(l)):
            for i in range(m):
                mx[i][l[x][1]]=0
            for i in range (n):
                mx[l[x][0]][i]=0
            

        