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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL){
            return l2;
        }
        
        if (l2 == NULL){
            return l1;
        }
        
        ListNode* t = NULL;
        ListNode* ret = NULL;

        if (l1->val <= l2->val){
            t = l1;
            l1 = l1->next;
        }else{
            t = l2;
            l2 = l2->next;
        }
        
        ret = t;
        
        while(l1 != NULL && l2 != NULL){
            if (l1->val <= l2->val){
                t->next = l1;
                t = l1;
                l1 = l1->next;
            }else{
                t->next = l2;
                t = l2;
                l2 = l2->next;
            }            
        }
        
        if (l1 != NULL){
            t->next = l1;
        }
        
        if (l2 != NULL){
            t->next = l2;
        }
        
        return ret;
    }
};
