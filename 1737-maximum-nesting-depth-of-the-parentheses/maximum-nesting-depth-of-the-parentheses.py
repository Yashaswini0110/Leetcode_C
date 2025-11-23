class Solution:
    def maxDepth(self, s: str) -> int:
        current=0
        maxdepth=0
        for c in s:
            if c=="(":
                current+=1
                if current>maxdepth:
                    maxdepth=current
            elif c==")":
                current-=1
        return maxdepth 

        