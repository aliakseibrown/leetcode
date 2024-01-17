class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        deck = defaultdict(int)
        for i in arr:
            deck[i]+=1
        return (len(set(deck.values())) == len(deck))

