class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle =="":
            return 0
        for i in range (len(haystack)+1-len(needle)):
            found =True
            for j in range (len(needle)):
                if haystack[i+j]!=needle[j]:
                    found = False 
                    break
            if found:
                return i

        return -1
