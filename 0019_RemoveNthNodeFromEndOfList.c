/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;

    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }

    int pos = count-n;

    if (pos == 0) {
        struct ListNode* newHead = head->next;
        free(head);
        return newHead;
    }

    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    while(pos>0){
        prev = curr;
        curr = curr->next;
        pos--;
    }

    prev->next = curr->next;

    return head;
}