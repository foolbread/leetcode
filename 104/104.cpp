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
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        
        int l = 1;
        int r = 1;
        l += this->maxDepth(root->left);
        
        r += this->maxDepth(root->right);
        
        return l > r ? l : r;
    }
};
