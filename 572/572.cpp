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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (!isSame(s,t)){
            if (s->left != NULL && isSubtree(s->left,t))
                return true;
            if (s->right != NULL && isSubtree(s->right,t))
                return true;
        }else{
            return true;
        }

        return false;
    }

    bool isSame(TreeNode* s, TreeNode* t){
        if (s->val != t->val)
            return false;

        if (s->left == NULL && t->left != NULL)
            return false;

        if (s->left != NULL && t->left == NULL)
            return false;

        if (s->right == NULL && t->right != NULL)
            return false;

        if (s->right != NULL && t->right == NULL)
            return false;

        if (s->left != NULL && t->left != NULL)
        {
            if (!isSame(s->left,t->left))
                return false;
        }

        if (s->right != NULL && t->right != NULL)
        {
            if (!isSame(s->right,t->right))
                return false;
        }

        return true;
    }
};
