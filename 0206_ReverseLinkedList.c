/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;

    struct ListNode* prev;
    struct ListNode* curr;
    struct ListNode* nextNode;

    prev = NULL;
    curr = head;
    nextNode = NULL;

    while(curr!=NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;

}