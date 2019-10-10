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
    ListNode* tmp;
    bool isPalindrome(ListNode* head) {
       tmp = head;
       return check(head);
    }

    bool check(ListNode* node){
        if (node == NULL)
            return true;

        bool ret = check(node->next) && (tmp->val == node->val);
        tmp = tmp->next;

        return ret;
    }
};
