class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        res = max(nums)
        currMax = 1
        currMin = 1
        for n in nums:
            temp = currMax * n
            currMax = max(currMax * n, currMin * n, n)
            currMin = min(temp, currMin * n, n)
            res = max(res, currMax, currMin)
        return res

