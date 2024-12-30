/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA == NULL || headB == NULL)
        return NULL;

    struct ListNode* tempA = headA;
    struct ListNode* tempB = headB;

    while(tempA!=tempB){
        tempA = tempA==NULL?headB:tempA->next;
        tempB = tempB==NULL?headA:tempB->next;
    }

    return tempA;
}