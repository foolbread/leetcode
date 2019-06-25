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
    string tree2str(TreeNode* t) {
        string ret;
        if (t == NULL)
            return ret;

        ret += to_string(t->val);
        if (t->left != NULL)
        {
            ret.push_back('(');
            ret += tree2str(t->left);
            ret.push_back(')');
        }

        if (t->left == NULL && t->right != NULL)
        {
            ret += "()";
        }

        if (t->right !=NULL)
        {
            ret.push_back('(');
            ret += tree2str(t->right);
            ret.push_back(')');
        }

        return ret;
    }
};
