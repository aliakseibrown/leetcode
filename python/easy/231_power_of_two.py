class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n > 0:
            i = n & (n - 1)
            if i == 0:
                return True
        return False
