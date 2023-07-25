class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        triplets = set()
        nums.sort()
        # -4 -1 -1 0  1 2
        for i, target in enumerate(nums):
            if i > 0 and target == nums[i-1]: continue
            l = i+1
            r = len(nums)-1
            while l < r:
                num = nums[l] + nums[r] + target
                if num == 0:
                    triplets.add((nums[l], nums[r],target))
                if num > 0:
                    r-=1
                else:
                    l+=1
        return triplets
