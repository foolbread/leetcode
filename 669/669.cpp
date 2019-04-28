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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if (root == NULL)
        {
            return root;
        }
        
        TreeNode* ret;
        
        if (root->val < L)
        {
            ret = trimBST(root->right,L,R);
        }else if (root->val > R)
        {
            ret = trimBST(root->left,L,R);
        }else
        {
            ret = root;
            ret->left = trimBST(root->left,L,R);
            ret->right = trimBST(root->right,L,R);
        }
            
        return ret;
    }
};
