class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        scheme = {'}':'{', ']':'[', ')':'('}
        for i in s:
            if i in scheme:
                if stack and stack[-1] == scheme[i]:
                    stack.pop()
                else: 
                    return False
            else:
                stack.append(i)
        return True if not stack else False

        "[([]])"
