class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result=[]
        subset=[]

        def backtrack(index):
            if index==len(nums):
                result.append(subset.copy())
                return 
                # choice 1 dont take the number yet 
            backtrack(index+1)

            # choice 2 - take the number into consideration and append it to the subset
            subset.append(nums[index])
            backtrack(index+1)
            subset.pop() # undo the choice to explore the all the  further paths

        backtrack(0)
        return result

        