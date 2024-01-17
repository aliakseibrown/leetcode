class Solution:
    def climbStairs(self, n: int) -> int:
        deck = {}
        deck[1] = 1
        deck[2] = 2
        def sub (n, deck):
            if n in deck:
                return deck[n]
            else:
                deck[n] = sub(n-1, deck) + sub(n-2, deck)
                return deck[n]
        return sub(n, deck)
