class Solution:
    def sumSubarrayMins(self, arr: List[int]) -> int:
        stack = []
        num = 0
        mod = 10**9 + 7 
        for i, n in enumerate(arr):
            while stack and n < stack[-1][1]:
                j, m = stack.pop()
                left = j - stack[-1][0] if stack else j + 1
                right = i - j
                num = (num + m * left * right) % mod
            stack.append((i, n))
        
        for i in range(len(stack)):
            j, n = stack[i]
            left = j - stack[i-1][0] if i > 0 else j + 1
            right = len(arr) - j
            num = (num + n * left * right) % mod
        return num
