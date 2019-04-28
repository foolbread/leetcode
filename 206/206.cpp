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
    ListNode* reverseList(ListNode* head) {
       ListNode *pre = NULL;
       ListNode *next = NULL;
       ListNode *it = head;
       
       while (it != NULL)
       {
           next = it->next;
           it->next = pre;
           pre = it;
           it = next;
       }
       
       return pre;
    }
};
