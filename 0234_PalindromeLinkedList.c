/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {

    if (head == NULL || head->next == NULL)
        return true;

    struct ListNode* top = NULL;
    struct ListNode* temp = head;
    

    while (temp != NULL) {
        struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = temp->val;

        node->next = top;
        top = node;
        temp = temp->next;
    }

    struct ListNode* rev = top;
    temp = head;
    
    while(temp!=NULL && rev!=NULL){
        if(temp->val!=rev->val){
            return false;
        }
        temp = temp->next;
        rev = rev->next;
    }

    return true;
}