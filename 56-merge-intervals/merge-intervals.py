class Solution(object):
    def merge(self, intervals):
        """
        :type intervals: List[List[int]]
        :rtype: List[List[int]]
        """
        intervals.sort()
        res=[intervals[0]]

        for curr in intervals:
            last=res[-1]
            if curr[0]<=last[1]:
                last[1]=max(curr[1], last [1])
            else:
                res.append(curr)
        return res