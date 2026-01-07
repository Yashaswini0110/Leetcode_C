class Solution:
    def countGoodNumbers(self, n: int) -> int:
        mod =10**9 +7
        def power(base,exp):
            result=1
            while exp >0:
                if exp %2==1:
                    result=(base*result) % mod 
                base=(base*base) % mod
                exp//=2
            return result
        even_pos =(n+1)//2 
        odd_pos= n//2
        return (power(5,even_pos) * power(4,odd_pos)) % mod 

        