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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> q;
        q.push(root1);
        TreeNode* node;
        string str1;
        string str2;
        while (q.size() != 0)
        {
            node = q.top();
            q.pop();           
            if (node->left==NULL && node->right==NULL)
            {
                cout << node->val << endl;
                str1.append(to_string(node->val));
            }
            
            if (node->right != NULL)
                q.push(node->right);
            
            if (node->left != NULL)
                q.push(node->left);        
        }
                
        q.push(root2);
        while (q.size() != 0)
        {
            node = q.top();
            q.pop();
            if (node->left==NULL && node->right==NULL)
            {
                cout << node->val << endl;
                str2.append(to_string(node->val));
            }
            
            if (node->right != NULL)
                q.push(node->right);
            
            if (node->left != NULL)
                q.push(node->left);
        }
        
        
        return str1==str2;
    }
};
