class Solution:
    def isPalindrome(self, s: str) -> bool:
        copy = str()
        reverse = str()
        for char in s:
             if char.isalpha() or char.isdigit():
                copy+=char.lower()
        for i in range(len(copy) -1, -1, -1):
            reverse+=copy[i]
        return reverse == copy            
