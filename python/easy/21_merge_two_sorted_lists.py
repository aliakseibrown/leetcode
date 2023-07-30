# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: 
Optional[ListNode]) -> Optional[ListNode]:
        temp = ListNode()
        tail = temp
        while list1 and list2:
            if list1.val < list2.val:
                tail.next = list1
                list1 = list1.next
            else:
                tail.next = list2
                list2 = list2.next
            print(tail)
            tail = tail.next
        if list1:
            tail.next = list1
        elif list2:
            tail.next = list2
        return temp.next


class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: 
Optional[ListNode]) -> Optional[ListNode]:
        merged = None
        sorted_list = list()
        while list1:
            sorted_list.append(list1.val)
            list1 = list1.next
        while list2:
            sorted_list.append(list2.val)
            list2 = list2.next
        sorted_list.sort(reverse=True)
        for i in sorted_list:
            merged = self.insert(merged, i)
        return merged

    def insert(self, merged: Optional[ListNode], num: int):
        temp = ListNode()
        temp.val = num
        temp.next = merged
        merged = temp
        return merged

