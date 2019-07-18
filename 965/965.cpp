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
    bool isUnivalTree(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        TreeNode* node;
        int t = root->val;

        while (!st.empty())
        {
            node = st.top();
            st.pop();
            if (node->val != t)
                return false;

            if (node->left != NULL)
                st.push(node->left);

            if (node->right != NULL)
                st.push(node->right);
        }

        return true;
    }
};
