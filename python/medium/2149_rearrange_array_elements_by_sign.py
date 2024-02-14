class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        positive = []
        negative = []
        ans = []
        for n in nums:
            if n > 0:
                positive.append(n)
            else:
                negative.append(n)
        
        for i in range(len(positive)):
            ans.append(positive[i])
            ans.append(negative[i])
        return ans
