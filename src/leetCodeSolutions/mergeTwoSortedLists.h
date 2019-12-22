// Found in https://leetcode.com/problems/merge-two-sorted-lists/
//
// Time Complexity:     O(n)
// Space Complexity:    O(n)
//

#include <iostream>

#include "problemInterface.h"

/**
 * Definition for singly-linked list.
 */
#ifndef LISTNODE
#define LISTNODE
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
#endif // LISTNODE

class SolutionMergeTwoSortedLists : public ProblemInterface {
public:
    ListNode * testMergeTwoSortedListsArg_1;
    ListNode * testMergeTwoSortedListsArg_2;
    ListNode * test_1_solution;

    SolutionMergeTwoSortedLists() {
        testMergeTwoSortedListsArg_1 = new ListNode(1);
        testMergeTwoSortedListsArg_1->next = new ListNode(2);
        testMergeTwoSortedListsArg_1->next->next = new ListNode(4);
        
        testMergeTwoSortedListsArg_2 = new ListNode(1);
        testMergeTwoSortedListsArg_2->next = new ListNode(3);
        testMergeTwoSortedListsArg_2->next->next = new ListNode(4);
    
        test_1_solution = new ListNode(1);
        test_1_solution->next = new ListNode(1);
        test_1_solution->next->next = new ListNode(2);
        test_1_solution->next->next->next = new ListNode(3);
        test_1_solution->next->next->next->next = new ListNode(4);
        test_1_solution->next->next->next->next->next = new ListNode(4);
    }

    void handleList(ListNode* &currL, ListNode* &currFinalL, ListNode* &finalL);
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
    virtual int runTestCases();
    std::string printList(ListNode* l);
};