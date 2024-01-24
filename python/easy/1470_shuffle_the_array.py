class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        ans = []
        length = len(nums)/2
        i = 0
        j = int(length)
        while i < length:
            ans.append(nums[i])
            ans.append(nums[i+j])
            i+=1
        return ans

