class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        freq=[0]*len(nums)

        for i in nums:
            if freq[i]==0:
                freq[i]+=1
            else:
                return i
        
        