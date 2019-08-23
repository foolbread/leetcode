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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        if (root == NULL)
            return ret;

        levelOrder(ret,root,0);
        reverse(ret.begin(),ret.end());
        return ret;
    }

    void levelOrder(vector<vector<int>> &vs,TreeNode* node,int level){
        if (node == NULL)
            return;

        if (level >= vs.size())
        {
            vector<int> t;
            vs.push_back(t);
        }
        vs[level].push_back(node->val);
        levelOrder(vs,node->left,level+1);
        levelOrder(vs,node->right,level+1);
    }
};
