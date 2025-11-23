class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        es=(n*(n+1))//2
        ass=sum(nums)
        return es-ass