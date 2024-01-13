class Solution:
    def minSteps(self, s: str, t: str) -> int:
        deck = defaultdict(int)
        num = 0
        for i in s:
            deck[i]+=1
        for i in t:
            deck[i]-=1
            if deck[i] >= 0: num+=1
        return len(s) - num
