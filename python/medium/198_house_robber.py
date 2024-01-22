class Solution:
    def rob(self, nums):
        rob1, rob2 = 0, 0
        for n in nums:
            rob2, rob1 = max(n + rob1, rob2), rob2
        return rob2
