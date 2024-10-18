class Solution:
    def palindrome(self, s: str) -> bool:
        return s==s[::-1]
    def longestPalindrome(self, s: str) -> str:
        if(self.palindrome(s) or len(s)==1):
            return s
        maxi=0
        s1=""
        for i in range (len(s)-1):
            for j in range(i+1,len(s)+1):
                s2=s[i:j]
                if(self.palindrome(s2) and len(s2)>maxi):
                    maxi=len(s2)
                    s1=s2
        return s1