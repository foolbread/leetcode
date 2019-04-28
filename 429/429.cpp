/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ret;

        if (root == NULL)
            return ret;
            
        queue<Node*> q;
        Node* n;
        q.push(root);
        int c=1;
        vector<int> t;
        
        while (!q.empty())
        {
            n = q.front();
            q.pop();
            
            t.push_back(n->val);
            
            for (int i=0; i<n->children.size(); i++)
            {
                q.push(n->children[i]);
            }
            
            c--;
            if (c == 0)
            {
                c = q.size();
                ret.push_back(t);
                t.clear();
            }
        }
        
        return ret;
    }
};
