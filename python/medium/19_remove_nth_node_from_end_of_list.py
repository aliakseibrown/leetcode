second solution:

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> 
Optional[ListNode]:
        dummy = ListNode(0, head)
        left = dummy
        right = head
        #locate the right pointer
        while n > 0 and right:
            right = right.next
            n-=1
        #now the distance between left and right is n
        while right:
            left = left.next
            right = right.next
        #rewrite the left pointer to the next.next
        left.next = left.next.next
        return dummy.next





# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None
        while head:
            temp = ListNode()
            temp.val = head.val
            temp.next = prev
            prev = temp
            head = head.next
        return prev

    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> 
Optional[ListNode]:
        copy = head
        s = Solution()
        reverse = s.reverseList(copy)
        correct_list = None
        while reverse:
            if n == 1: 
                n-=1
                reverse = reverse.next
                continue
            temp = ListNode()
            temp.val = reverse.val
            temp.next = correct_list
            correct_list = temp
            reverse = reverse.next
            n-=1
        return correct_list
