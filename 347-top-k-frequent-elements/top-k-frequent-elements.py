from collections import defaultdict

class Solution(object):
    def topKFrequent(self, nums, k):
        # 1) Count frequency of each number
        count = {}
        for n in nums:
            count[n] = 1 + count.get(n, 0)

        # 2) Create buckets: index = frequency, value = list of numbers
        freq = [[] for _ in range(len(nums) + 1)]
        for n, c in count.items():
            freq[c].append(n)

        # 3) Go from highest frequency to lowest, pick elements
        res = []
        for i in range(len(freq) - 1, 0, -1):   # from n down to 1
            for n in freq[i]:
                res.append(n)
                if len(res) == k:
                    return res
