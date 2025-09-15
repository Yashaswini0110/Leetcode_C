class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = []
        n = len(nums)

        for i, a in enumerate(nums):
            if i > 0 and a == nums[i - 1]:
                continue  # skip same 'a' to avoid duplicate triplets

            # Optional early stop: since nums is sorted, if a > 0 no triplet can sum to 0
            if a > 0:
                break

            l, r = i + 1, n - 1
            while l < r:
                s = a + nums[l] + nums[r]
                if s < 0:
                    l += 1
                elif s > 0:
                    r -= 1
                else:
                    res.append([a, nums[l], nums[r]])

                    # move both pointers
                    l += 1
                    r -= 1

                    # skip duplicates on left
                    while l < r and nums[l] == nums[l - 1]:
                        l += 1
                    # skip duplicates on right
                    while l < r and nums[r] == nums[r + 1]:
                        r -= 1

        return res
