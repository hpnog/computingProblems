// Found in https://leetcode.com/problems/add-two-numbers/
//
// Time Complexity:     O(max(m, n))
// Space Complexity:    O(max(m, n))
//
// In which m, n are the size of each of the given lists


/**
 * Definition for singly-linked list.
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class SolutionAddTwoNumbers {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int extra = 0);
};