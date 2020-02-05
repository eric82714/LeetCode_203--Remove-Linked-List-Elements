# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:    
        tmp = prev = ListNode(None)
        tmp.next = head
        
        while head:
            if head.val == val:
                prev.next, head = head.next, head.next
                continue
            prev, head = head, head.next
                
        return tmp.next
