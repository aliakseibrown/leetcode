class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        xor = 0
        for n in nums: 
            xor |= n
        return xor << len(nums)-1
