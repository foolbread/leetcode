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
    ListNode* oddEvenList(ListNode* head) {
       if (head == NULL || head->next == NULL)
            return head;
        
        ListNode* cnhead = head->next;
        ListNode* ohead = head;
        ListNode* cnode = head->next;
        while (cnode && cnode->next)
        {
            ohead->next = cnode->next;
            cnode->next = cnode->next->next;
            cnode = cnode->next;
            ohead = ohead->next;
        }
           
        ohead->next = cnhead;
        
        return head;
    }
};
