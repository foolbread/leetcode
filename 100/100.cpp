/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL)
        {
            if (p == q)
                return true;
            
            return false;
        }
            
            
        bool bl = false;
        bool br = false;
        
        bl = this->isSameTree(p->left, q->left);
        br = this->isSameTree(p->right, q->right);
        
        if (bl == br && bl == true)
        {
            if (p->val == q->val)
                return true;
        }
        
        return false;
    }

};
