class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        sub_map = dict()
        longest = 0
        l = 0
        max_letter_count = 0
        for r in range(len(s)):
            sub_map[s[r]] = 1 + sub_map.get(s[r], 0)
            max_letter_count = max(max_letter_count, sub_map[s[r]])
            while (r - l + 1) - max_letter_count > k:
                sub_map[s[l]]-=1
                l+=1
            longest = max(longest, r - l + 1)
        return longest
