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
    int sumVal;
    int pathSum(TreeNode* root, int sum) {
        if (root == NULL)
            return 0;

        cntSum(root,sum);
        pathSum(root->left,sum);
        pathSum(root->right,sum);

        return sumVal;
    }

    void cntSum(TreeNode* node,int sum) {
        if (node == NULL)
            return;

        int v = sum - node->val;
        if (v == 0)
            sumVal++;

        cntSum(node->left,v);
        cntSum(node->right,v);
    }
};
