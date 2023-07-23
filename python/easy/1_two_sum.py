class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l = len(nums)
        dic = {}
        for i in range(l):
            x = target - nums[i]
            if nums[i] in dic:
                return [dic[nums[i]], i]
            else:
                dic[x] = i
