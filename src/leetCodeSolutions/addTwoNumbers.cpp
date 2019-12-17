#include <iostream>
#include "addTwoNumbers.h"

bool ListNode::compare(ListNode * y)  {
    if(val != y->val)
        return false;
    if(next == NULL && y->next == NULL)
        return true;

    return next->compare(y->next);
}

std::string SolutionAddTwoNumbers::printList(ListNode * l) {
    std::string res;
    res += "[ " + std::to_string(l->val);

    while(l->next != NULL) {
        l = l->next;
        res += ", " + std::to_string(l->val);
    }

    res += " ]\0";
    return res;
};

ListNode* SolutionAddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2, int extra) {
    if(l1 == NULL && l2 == NULL && extra == 0)
        return NULL;

    int currSum =   (l1 != NULL ? l1->val : 0) + 
                    (l2 != NULL ? l2->val : 0) + 
                    extra;
    
    ListNode * resNode;
    resNode = new ListNode(currSum % 10);
    
    if(currSum > 9) {
        resNode->next = addTwoNumbers(l1 != NULL ? l1->next : NULL, 
                                      l2 != NULL ? l2->next : NULL, 
                                      currSum / 10);
    } else {
        if(l1 != NULL && l1->next == NULL && 
           l2 != NULL && l2->next == NULL)
            resNode->next = NULL;
        else if (l1 != NULL && l1->next == NULL &&
                 l2 != NULL /* && l2->next != NULL */)
            resNode->next = l2->next;
        else
            resNode->next = addTwoNumbers(  l1 != NULL ? l1->next : NULL, 
                                            l2 != NULL ? l2->next : NULL);
    }
    
    return resNode;
};

int SolutionAddTwoNumbers::runTestCases() {
    ListNode * arg1 = testAddTwoNumbersArg_1;
    ListNode * arg2 = testAddTwoNumbersArg_2;
    
    ListNode * sol = test_1_solution;

    ListNode *  result_1 = addTwoNumbers(arg1, arg2);

	std::cout << "Selecting Add Two Numbers Probem...\n";
    std::cout << "Going to run test case 1:\n\n";
    std::cout << "Arg 1 = " << printList(arg1) << std::endl;
    std::cout << "Arg 2 = " << printList(arg2) << std::endl << std::endl;
    std::cout << "Expected Result = " << printList(sol) << std::endl;
    std::cout << "Achieved Result = " << printList(result_1) << std::endl << std::endl;

    return 0;
};