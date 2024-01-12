class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vowels = 'aeiouAEIOU'
        ln = int(len(s)/2)
        num = 0
        for i in range(ln):
            if s[i] in vowels: num+=1
        for i in range(ln):
            if s[i+ln] in vowels: num-=1
        return not num
