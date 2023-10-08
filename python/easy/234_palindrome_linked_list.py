# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        copy = head
        values = []

        while copy:
            values.append(copy.val)
            copy = copy.next

        return values == values[::-1]
