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
    int preSum = 0;
    TreeNode* convertBST(TreeNode* root) {
        preOrder(root);
        return root;
    }

    void preOrder(TreeNode* node) {
        if (node == NULL)
            return;

        preOrder(node->right);
        node->val += preSum;
        preSum = node->val;
        preOrder(node->left);
    }
};
