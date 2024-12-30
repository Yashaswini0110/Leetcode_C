/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head==NULL || head->next==NULL)
        return head;

    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* currNext = head->next;

    head = currNext;

    while(curr!=NULL && currNext!=NULL){
        curr->next = currNext->next;
        currNext->next = curr;
        if(prev!=NULL)
            prev->next = currNext;

        prev = curr;
        curr = curr->next;
        if(curr!=NULL)
            currNext = curr->next;
    }
    return head;

}