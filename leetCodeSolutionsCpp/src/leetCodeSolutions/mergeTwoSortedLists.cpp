#include "mergeTwoSortedLists.h"

void SolutionMergeTwoSortedLists::handleList(ListNode* &currL, ListNode* &currFinalL, ListNode* &finalL){
    if(finalL == NULL) {
        currFinalL = new ListNode(currL->val); 
        finalL = currFinalL;
    } else {
        currFinalL->next = new ListNode(currL->val);
        currFinalL = currFinalL->next;
    }
    currL = currL->next;
};

ListNode* SolutionMergeTwoSortedLists::mergeTwoLists(ListNode* l1, ListNode* l2) {        
    ListNode * finalL = NULL;
    ListNode * currFinalL = finalL;
    
    while(l1 != NULL || l2 != NULL) {
        if(l1 != NULL && l2 != NULL) {
            if(l1->val <= l2->val) {
                handleList(l1, currFinalL, finalL);
            } else {
                handleList(l2, currFinalL, finalL);
            }
        } else if(l1 != NULL) {
            handleList(l1, currFinalL, finalL);
        } else /* if(currL2 != NULL) */ {
            handleList(l2, currFinalL, finalL);
        }  
    }

    return finalL;
}

std::string SolutionMergeTwoSortedLists::printList(ListNode * l) {
    std::string res;
    res += "[ " + std::to_string(l->val);

    while(l->next != NULL) {
        l = l->next;
        res += ", " + std::to_string(l->val);
    }

    res += " ]\0";
    return res;
};

int SolutionMergeTwoSortedLists::runTestCases() {
    ListNode * arg1 = testMergeTwoSortedListsArg_1;
    ListNode * arg2 = testMergeTwoSortedListsArg_2;
    
    ListNode * sol = test_1_solution;

    ListNode * result_1 = mergeTwoLists(arg1, arg2);

	std::cout << "Selecting Merge Two Sorted Lists Probem...\n";
    std::cout << "Going to run test case 1:\n\n";
    std::cout << "Arg 1 = " << printList(arg1) << std::endl;
    std::cout << "Arg 2 = " << printList(arg2) << std::endl << std::endl;
    std::cout << "Expected Result = " << printList(sol) << std::endl;
    std::cout << "Achieved Result = " << printList(result_1) << std::endl << std::endl;

    return 0;
}