class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        result=""
        level=0
        for ch in s:
            if ch=="(":
                if level > 0:
                    result+="("
                level+=1
            else:
                level-=1 
                if level > 0:
                    result +=")"
        return result