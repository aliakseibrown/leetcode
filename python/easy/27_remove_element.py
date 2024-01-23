class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        slow = len(nums)
        i = 0
        while i < slow:
            if nums[i] == val:
                nums[i] = nums[slow-1]
                slow-=1
                i-=1
            i+=1
        return slow
