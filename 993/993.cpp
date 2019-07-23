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
    bool isCousins(TreeNode* root, int x, int y) {
        int p1,p2;
        int t1,t2;
        t1 = getInfo(root,p1,x,0);
        t2 = getInfo(root,p2,y,0);

        return t1==t2 && p1!=p2;
    }

    int getInfo(TreeNode* root, int &parent, int i, int dep) {
        int ret = -1;
        if (root->left != NULL)
        {
            if (root->left->val == i)
            {
                parent = root->val;
                return dep+1;
            }

            ret = getInfo(root->left,parent,i,dep+1);
            if (ret >= 0)
                return ret;
        }

        if (root->right != NULL)
        {
            if (root->right->val == i)
            {
                parent = root->val;
                return dep+1;
            }

            ret = getInfo(root->right,parent,i,dep+1);
            if (ret >= 0)
                return ret;
        }

        return -1;
    }
};
