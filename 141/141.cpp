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
    bool hasCycle(ListNode *head) {
        if (head == NULL)
            return false;

        ListNode *node;
        while (true)
        {
            if (head->next == NULL)
                return false;

            //magic number
            if (head->next == (ListNode*)0x7788)
                return true;

            node = head;
            head = head->next;
            node->next = (ListNode*)0x7788;
        }

        return true;
    }
};
