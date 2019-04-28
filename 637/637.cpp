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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ret;
        queue<TreeNode*> q;
        TreeNode* tmp;
        q.push(root);
        int c = 1;
        int n = 1;
        double sum = 0.0;
        while (!q.empty())
        {
            c = n;
            n = 0;
            for (int i=0; i<c; i++)
            {
                tmp = q.front();
                q.pop();
                sum += (double)tmp->val;
                if (tmp->left != NULL)
                {
                    q.push(tmp->left);
                    n++;
                }
                
                if (tmp->right != NULL)
                {
                    q.push(tmp->right);
                    n++;
                }
            }
            
            ret.push_back(sum/c);
            sum = 0.0;
        }
        
        return ret;
    }
};
