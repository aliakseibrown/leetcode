# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        slow = head
        fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        second = slow.next
        rev_list = slow.next = None

        while second:
            temp = second.next
            second.next = rev_list
            rev_list = second
            second = temp

        first = head
        second = rev_list
        while second:
            temp = first.next
            temp_2 = second.next
            first.next = second
            second.next = temp
            first = temp
            second = temp_2
