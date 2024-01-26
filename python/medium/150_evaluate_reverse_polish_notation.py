class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        operators = ["+", "-", "*", "/"]
        if len(tokens) == 1: return int(tokens[0])
        num = 0
        for v in tokens:
            if v in operators:
                second = int(stack.pop())
                first = int(stack.pop())
                if v == "+": num = first + second
                if v == "-": num = first - second
                if v == "*": num = first * second
                if v == "/": num = first / second
                stack.append(num)
            else:
                stack.append(v)
        return int(num)

        
