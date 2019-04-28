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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* tmp = head;
        while (tmp != NULL)
        {
            len++;
            tmp = tmp->next;
        }
        
        int pos = len/2 + 1;
        len = 0;
        tmp = head;
        while (tmp != NULL)
        {
            len++;
            if (pos == len)
            {
                return tmp;
            }
            tmp = tmp->next;
        }
    }
};
