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
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;

        int left = depth(root->left,1);
        int right = depth(root->right,1);
        if (abs(right-left) > 1)
        {
            return false;
        }

        if (isBalanced(root->left)&&isBalanced(root->right))
            return true;

        return false;
    }

    int depth(TreeNode* node,int d){
        if (node == NULL)
            return d;

        int ret = max(depth(node->left,d+1),depth(node->right,d+1));

        return ret;
    }
};
