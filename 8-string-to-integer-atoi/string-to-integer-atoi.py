class Solution:
    def myAtoi(self, s: str) -> int:
        INT_MAX=2**31-1
        INT_MIN= -2**31

        def helper (i, sign, result, started):
            if i ==len(s):
                return sign*result
            ch=s[i]
            
            # 0-> nothing seen yet
            if  started==0 and ch==' ':
                return helper(i+1,sign, result, started)
            # 0-> sign allow once
            if started==0 and (ch=="+" or ch=="-"):
                if ch=='-':
                    sign=-1
                else :
                    sign=1
                started =1
                return helper(i+1, sign,result,started)
            # digit allowed only if not finished 
            if ch.isdigit() :
                started =2
                digit=ord(ch)-ord('0')

                if result >INT_MAX //10 or (result == INT_MAX // 10 and digit>INT_MAX%10):
                    if sign==1:
                        return INT_MAX
                    else:
                        return INT_MIN
                result=result * 10 +digit 
                return helper (i+1, sign, result, started)
            if started==2:
                return sign*result
            return 0
        return helper (0,1,0,0)


        
        