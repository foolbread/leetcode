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
    int findTilt(TreeNode* root) {
        if (root == NULL)
            return 0;

        int lt = tiltSum(root->left);
        int rt = tiltSum(root->right);
        int ret = abs(rt-lt);
        ret = ret + findTilt(root->left);
        ret = ret + findTilt(root->right);
        return ret;
    }

    int tiltSum(TreeNode* node) {
        if (node == NULL)
            return 0;

        int ret = node->val;
        ret = ret + tiltSum(node->left);
        ret = ret + tiltSum(node->right);

        return ret;
    }
};
