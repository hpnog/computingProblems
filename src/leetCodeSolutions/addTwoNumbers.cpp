#include <iostream>
#include "addTwoNumbers.h"

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
}