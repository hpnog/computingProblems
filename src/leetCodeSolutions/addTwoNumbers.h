// Found in https://leetcode.com/problems/add-two-numbers/
//
// Time Complexity:     O(max(m, n))
// Space Complexity:    O(max(m, n))
//
// In which m, n are the size of each of the given lists


/**
 * Definition for singly-linked list.
 */

#include "problemInterface.h"

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}

    bool compare(ListNode * y);
};

class SolutionAddTwoNumbers : public ProblemInterface {
public:
    ListNode * testAddTwoNumbersArg_1;
    ListNode * testAddTwoNumbersArg_2;
    ListNode * test_1_solution;

    SolutionAddTwoNumbers() {
        testAddTwoNumbersArg_1 = new ListNode(2);
        testAddTwoNumbersArg_1->next = new ListNode(4);
        testAddTwoNumbersArg_1->next->next = new ListNode(3);

        testAddTwoNumbersArg_2 = new ListNode(5);
        testAddTwoNumbersArg_2->next = new ListNode(6);
        testAddTwoNumbersArg_2->next->next = new ListNode(4);

        test_1_solution = new ListNode(7);
        test_1_solution->next = new ListNode(0);
        test_1_solution->next->next = new ListNode(8);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int extra = 0);

    virtual int runTestCases();
};