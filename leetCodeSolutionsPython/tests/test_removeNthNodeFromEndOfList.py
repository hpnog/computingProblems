import removeNthNodeFromEndOfList
from removeNthNodeFromEndOfList import ListNode
import unittest

class RemoveNthNodeFromEndOfListCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_removeNthNodeFromEndOfList(self):
        s = removeNthNodeFromEndOfList.Solution()

        arg1 = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
        sol1 = ListNode(1, ListNode(2, ListNode(3, ListNode(5))))

        for nums, target, sol in [  (arg1, 2, sol1)]:
            currSol = s.removeNthFromEnd(nums, target)
            currSol = s.printList(currSol)
            expectedSol = s.printList(sol)

            self.assertEqual(currSol, expectedSol)

