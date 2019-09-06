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
    int min;
    int semin;
    int findSecondMinimumValue(TreeNode* root) {
        if (root == NULL)
            return -1;
        min = root->val;
        semin = root->val;

        cmpSemin(root->left);
        cmpSemin(root->right);

        return min==semin ? -1:semin;
    }

    void cmpSemin(TreeNode* node){
        if (node == NULL)
            return;

        if (min==semin && node->val>semin)
        {
            semin = node->val;
        }

        if (min!=node->val && node->val<semin)
        {
            semin = node->val;
        }

        cmpSemin(node->left);
        cmpSemin(node->right);
    }
};
