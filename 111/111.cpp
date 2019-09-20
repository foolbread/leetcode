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
    int min = 0 ;
    int minDepth(TreeNode* root) {
        if (root == NULL)
            return min;

        cntDepth(root,1);
        return min;
    }

    void cntDepth(TreeNode* node, int dep){
       if (node->left==NULL && node->right==NULL){
           if (min == 0)
               min = dep;
           else
               min = min > dep ? dep : min;

           return;
       }


       if (node->left != NULL)
           cntDepth(node->left,dep+1);

       if (node->right != NULL)
           cntDepth(node->right,dep+1);
    }
};
