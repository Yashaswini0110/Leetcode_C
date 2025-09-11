from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # 1. Count frequencies
        count = {}
        for n in nums:
            count[n] = 1 + count.get(n, 0)

        # 2. Create buckets
        freq = [[] for _ in range(len(nums) + 1)]
        for n, c in count.items():
            freq[c].append(n)

        # 3. Collect results
        res = []
        for i in range(len(freq) - 1, 0, -1):  # from high freq to low
            for n in freq[i]:
                res.append(n)
                if len(res) == k:
                    return res
