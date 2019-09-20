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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL)
            return false;

        return cntPathSum(root,0,sum);
    }

    bool cntPathSum(TreeNode* node, int val, int sum) {
        if (node->left == NULL && node->right == NULL)
            return (val+node->val) == sum;

        bool bleft = false;
        bool bright = false;
        if (node->left != NULL)
            bleft = cntPathSum(node->left,val+node->val,sum);

        if (node->right != NULL)
            bright = cntPathSum(node->right,val+node->val,sum);

        return (bleft||bright);
    }
};
