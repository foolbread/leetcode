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
    vector<string> ret;
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == NULL)
            return ret;

        string str;
        printPath(root,str);
        return ret;
    }

    void printPath(TreeNode* node,string pa){
        if (node == NULL)
            return;

        pa.append(to_string(node->val));

        if (node->left!=NULL || node->right!=NULL)
        {
            pa.append("->");
            printPath(node->left,pa);
            printPath(node->right,pa);
        }

        if (node->left==NULL && node->right==NULL)
        {
            ret.push_back(pa);
        }

    }
};
