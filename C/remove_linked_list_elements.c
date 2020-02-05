/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* prev = tmp;
        
    tmp->next = head;
        
    while(head != NULL) {
        if(head->val == val) {
            prev->next = head->next;
            head = head->next;
            continue;
        }
        prev = head;
        head = head->next;
    }
    return tmp->next;
}
