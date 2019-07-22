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
    bool findTarget(TreeNode* root, int k) {
        set<int> se;
        stack<TreeNode*> st;
        TreeNode* t;
        st.push(root);

        while(!st.empty())
        {
            t = st.top();
            st.pop();
            if (se.count(k-t->val) > 0)
                return true;
            se.insert(t->val);

            if (t->left)
                st.push(t->left);

            if (t->right)
                st.push(t->right);
        }

        return false;
    }
};
