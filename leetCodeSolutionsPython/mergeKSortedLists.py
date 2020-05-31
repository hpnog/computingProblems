# Found in https://leetcode.com/problems/merge-k-sorted-lists/
#
# Time Complexity:     O(n*m log(n*m))
# Space Complexity:    O(n*m)

from heapq import heappush, heappop 

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
    def equals(self, l):
        h1 = self
        h2 = l
        while(h1 is not None and h2 is not None):
            if h1.val is not h2.val:
                return False
            h1 = h1.next
            h2 = h2.next
        if h1 is not None or h2 is not None:
            return False
        return True

class Solution:
    def mergeKLists(self, lists: [ListNode]) -> ListNode:
        heap = []
        for head in lists:
            while head is not None:
                heappush(heap, head.val)
                head = head.next
        
        res = ListNode(heappop(heap)) if len(heap) is not 0 else None
        curr = res
        
        while len(heap) is not 0:
            curr.next = ListNode(heappop(heap))
            curr = curr.next
        return res