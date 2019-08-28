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
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL)
            return 0;

        int t = depth(root->left)+depth(root->right);
        int lt = diameterOfBinaryTree(root->left);
        int rt = diameterOfBinaryTree(root->right);
        int ret = lt>rt?lt:rt;
        ret = t>ret?t:ret;
        return ret;
    }

    int depth(TreeNode* node){
        if (node == NULL)
            return 0;

        int left = depth(node->left);
        int right = depth(node->right);
        int ret = left>right?left:right;
        return ret+1;
    }
};
