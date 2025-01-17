# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head==None | head.next==None:
            return False
        back=head
        front=head.next
        while front!=None & front.next!=None:
            if back==front:
                return True
            back=back.next
            front=front.next.next

        return False