class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        deck1 = Counter(word1)
        deck2 = Counter(word2)
        if set(deck1) != set(deck2): return False
        st = sorted(deck1.values())
        st2 = sorted(deck2.values())
        return st == st2 
