/*
// Definition for a Node.
class Node {
public:
    int val;
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
    vector<int> preorder(Node* root) {
        vector<int> ret;
        if (root == NULL)
        {
            return ret;
        }
        
        stack<Node*> s;
        Node* n;
        s.push(root);
        while (!s.empty())
        {
            n = s.top();
            s.pop();
            
            ret.push_back(n->val);
            if (n->children.size()>0)
            {
                for (vector<Node*>::reverse_iterator rit=n->children.rbegin(); rit!=n->children.rend(); rit++)
                {
                    s.push(*rit);
                }
            }
        }
        
        return ret;
    }
};
