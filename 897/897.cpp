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
    TreeNode* increasingBST(TreeNode* root) {
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return root;
        
        stack<TreeNode*> s;
        s.push(root);
        TreeNode* head = NULL;
        TreeNode* pre;
        TreeNode* t;
        while (!s.empty())
        {
            t = s.top();
            if (t->left != NULL)
            {
                s.push(t->left);
                t->left = NULL;
                continue;
            }
            
            if (head == NULL)
            {
                head = t;
                pre = t;
            }
            
            s.pop();
            if (t->right != NULL)
            {
                s.push(t->right);
                t->right = NULL;
            }
            pre->right = t;
            pre = t;
        }
        return head;
    }
};
