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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL)
            return NULL;
        
        TreeNode *node = root;
        while (node != NULL)
        {
            if (node->val == val)
                return node;
            
            if (node->val > val)
                node = node->left;
            else
                node = node->right;
        }
        
        return NULL;
    }
};
