class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        l = len(nums)
        mapa = [0]* (l+1)
        miss = 0
        dub = 0
        for n in nums:
            mapa[n]+=1
        for i in range(1, len(mapa)):
            if mapa[i] == 0:
                miss = i
            if mapa[i] == 2:
                dub = i
        return [dub, miss]
