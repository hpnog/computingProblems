# Found in https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/
#
# Time Complexity:     O(n)
# Space Complexity:    O(1)

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

############# SOLUTION 2 - 2 pointers #############
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        p1, p2, i1, i2 = head, head, 0, 0
        
        while p2 is not None:
            p2 = p2.next
            i2 += 1
            
            if (i2 - i1) > (n + 1):
                p1 = p1.next
                i1 += 1
                        
        if p1 is head and (i2 - i1) <= n:
            return head.next
        else:
            p1.next = p1.next.next            
            
        return head
    
    def printList(self, head: ListNode) -> str:
        string = "["
        while head is not None:
            string += str(head.val) + ","
            head = head.next
        return string[:-1] + "]"
        
############# SOLUTION 1 - Store list #############
#
#    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
#        allNodes = []
#        currNode = head
#        while currNode is not None:
#            allNodes.append(currNode)
#            currNode = currNode.next
#        
#        indexToRemove = len(allNodes) - n
#        
#        if indexToRemove is 0:
#            head = head.next
#        elif indexToRemove is len(allNodes) - 1:
#            allNodes[indexToRemove-1].next = None
#        else:
#            allNodes[indexToRemove-1].next = allNodes[indexToRemove+1]
#        
#        return head
#
#######################################

# def main():
#     s = Solution()
#     arg1 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
#     sol1 = ListNode(1, ListNode(2, ListNode(3, ListNode(5))))
# 
#     currSol = s.removeNthFromEnd(arg1, 2)
#     currSol = s.printList(currSol)
#     expectedSol = s.printList(sol1)
# 
#     print(currSol)
#     print(expectedSol)
# 
# if __name__ == "__main__":
#     main()