class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s = set(nums)          # O(n) build; O(1) average membership
        longest = 0

        for n in s:            # iterate set to avoid duplicates
            if n - 1 not in s: # start of a streak
                length = 1
                while n + length in s:
                    length += 1
                longest = max(longest, length)

        return longest
