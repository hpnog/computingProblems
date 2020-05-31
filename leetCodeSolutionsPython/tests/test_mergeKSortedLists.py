import mergeKSortedLists
from mergeKSortedLists import ListNode
import unittest

class MergeKSortedListsCase(unittest.TestCase):
    def setUp(self):
        pass
    
    def tearDown(self):
        pass
    
    def test_mergeKSortedLists(self):
        s = mergeKSortedLists.Solution()

        l1 = ListNode(1, ListNode(4, ListNode(5)))
        l2 = ListNode(1, ListNode(3, ListNode(4)))
        l3 = ListNode(2, ListNode(6))

        arg1 = [l1, l2, l3]
        sol1 = ListNode(1, ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(4, ListNode(5, ListNode(6))))))))

        for arg, sol in [(arg1, sol1)]:
            self.assertEqual(sol.equals(s.mergeKLists(arg)), True)