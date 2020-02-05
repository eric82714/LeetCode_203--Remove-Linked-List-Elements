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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* tmp = new ListNode(NULL);
        ListNode* prev = tmp;
        
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
};
