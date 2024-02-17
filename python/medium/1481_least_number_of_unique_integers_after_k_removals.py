class Solution:
    def findLeastNumOfUniqueInts(self, arr: List[int], k: int) -> int:
        c = Counter(arr)
        if len(arr) == k: return 0
        listed = sorted(c.items(), key=lambda x:x[1], reverse=True)
        while k >= listed[-1][1]:
            k -= listed[-1][1]
            listed.pop()
        return len(listed)
