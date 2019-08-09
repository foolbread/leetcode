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
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        preOrder(root,false);
        return sum;
    }

    void preOrder(TreeNode* node, bool isleft) {
        if (node == NULL)
            return;

        if (isleft && node->right==NULL && node->left==NULL){
            sum += node->val;
            return;
        }

        preOrder(node->right,false);
        preOrder(node->left,true);
    }
};
