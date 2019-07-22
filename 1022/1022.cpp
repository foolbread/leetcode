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
    int sumRootToLeaf(TreeNode* root) {
        return sumRootToLeafEx(root,0);
    }

    int sumRootToLeafEx(TreeNode* root, int val) {
        val = val*2 + root->val;
        int sum = 0;

        if (root->left != NULL)
            sum += sumRootToLeafEx(root->left,val);

        if (root->right != NULL)
            sum += sumRootToLeafEx(root->right,val);

        if (root->right == root->left)
            return val;

        return sum;
    }
};
