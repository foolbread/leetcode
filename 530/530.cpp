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
    vector<int> val;
    int getMinimumDifference(TreeNode* root) {
        preOrder(root);
        int min = INT_MAX;
        for (int i=0; i<val.size()-1; i++)
        {
            min = val[i]-val[i+1] > min?min:val[i]-val[i+1];
        }

        return min;
    }

    void preOrder(TreeNode* node) {
        if (node == NULL)
            return;

        preOrder(node->right);
        val.push_back(node->val);
        preOrder(node->left);
    }
};
