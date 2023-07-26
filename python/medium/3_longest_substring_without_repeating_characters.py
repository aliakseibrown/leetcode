class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        set_substring = set()
        l = 0
        longest = 0
        for r in range(len(s)):
            while s[r] in set_substring:
                set_substring.remove(s[l])
                l+=1
            set_substring.add(s[r])
            longest = max(longest, r - l + 1)
        return longest
