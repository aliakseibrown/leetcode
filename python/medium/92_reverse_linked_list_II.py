# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: 
int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        leftPrev = dummy
        cur = head

        for i in range(left - 1):
            cur = cur.next
            leftPrev = leftPrev.next
        reversed_list = None

        for i in range( right - left + 1):
            temp = cur.next
            cur.next = reversed_list
            reversed_list = cur
            cur = temp

        leftPrev.next.next = cur
        leftPrev.next = reversed_list
        return dummy.next
