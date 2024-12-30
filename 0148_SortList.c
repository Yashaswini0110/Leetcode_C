/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* merge(struct ListNode* left, struct ListNode* right){
    if (left==NULL) 
        return right;
    if (right==NULL)
        return left;

    struct ListNode* res;

    if (left->val < right->val){
        res = left;
        res->next = merge(left->next, right);
    } 

    else{
        res = right;
        res->next = merge(left, right->next);
    }

    return res;
}

struct ListNode* findMiddle(struct ListNode* head){
    struct ListNode* slow = head;
    struct ListNode* fast = head->next;

    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}


struct ListNode* sortList(struct ListNode* head) {
    
    if(head==NULL || head->next==NULL)
        return head;

    struct ListNode* mid = findMiddle(head);
    struct ListNode* right = mid->next;
    mid->next = NULL;

    struct ListNode* left = sortList(head);
    right = sortList(right);

    return merge(left, right); 
}
