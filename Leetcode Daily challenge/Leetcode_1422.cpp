class Solution:
    def maxScore(self, s: str) -> int:
        xs=cz=0
        co=s.count('1')
        for i in range(len(s)-1):
            cz+=s[i]=='0'
            co-=s[i]=='1'
            xs=max(xs,cz+co)
        return xs