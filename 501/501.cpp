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
    vector<int> ret;
    vector<int> findMode(TreeNode* root) {
        if (root == NULL)
            return ret;

        levelTree(root);
        int max = 0;
        for (int i=1; i<ret.size(); i+=2)
        {
            max = max > ret[i] ? max : ret[i];
        }

        int idx=0;
        for (int i=1; i<ret.size(); i+=2)
        {
            if (ret[i] == max)
                ret[idx++] = ret[i-1];
        }

        ret.resize(idx);
        return ret;
    }

    void levelTree(TreeNode* node){
        if (node == NULL)
            return;

        CntInVec(node->val);

        levelTree(node->left);
        levelTree(node->right);
    }

    void CntInVec(int val){
        for (int i=0; i<ret.size(); i+=2)
        {
            if (ret[i] == val)
            {
                ++ret[i+1];
                return;
            }
        }

        ret.push_back(val);
        ret.push_back(1);
        return;
    }
};
