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
    int longestUnivaluePath(TreeNode* root) {
        if (root == NULL)
            return 0;

        int cnt = CntSameVal(root->left,root->val)+CntSameVal(root->right,root->val);
        int left = longestUnivaluePath(root->left);
        int right = longestUnivaluePath(root->right);

        int ret = max(max(cnt,left),right);
        return ret;
    }

    int CntSameVal(TreeNode* node,int val){
        if (node==NULL || node->val!=val)
            return 0;

        int left = 1+CntSameVal(node->left,val);
        int right = 1+CntSameVal(node->right,val);

        return max(left,right);
    }
};
