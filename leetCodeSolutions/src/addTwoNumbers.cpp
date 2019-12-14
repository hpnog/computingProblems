// Found in https://leetcode.com/problems/add-two-numbers/
//
// Time Complexity:     O(max(m, n))
// Space Complexity:    O(max(m, n))
//
// In which m, n are the size of each of the given lists


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int extra = 0) {
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
};