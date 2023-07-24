class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums: return 0
        sorted_list = list(sorted(set(nums)))
        longest = 1
        max_len = 1
        print(sorted_list)
        for i in range(len(sorted_list) - 1):
            if sorted_list[i] + 1 != sorted_list[i+1]:
                longest = 1
                continue
            longest +=1
            if max_len < longest: max_len = longest
        return max_len

