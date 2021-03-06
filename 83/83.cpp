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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return head;
            
        ListNode* cur = head;
        while (cur->next != NULL)
        {
            if (cur->val == cur->next->val)
            {
                cur->next = cur->next->next;
                continue;
            }
            
            cur = cur->next;
        }
        
        return head;
    }
};
