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
    vector<int> postorder(Node* root) {
        vector<int> ret;
        if (root == NULL)
            return ret;
        
        stack<Node*> s;
        list<int> t;
        s.push(root);
        Node* node;
        
        while(!s.empty())
        {
            node = s.top();
            s.pop();
            t.push_front(node->val);
            
            if (node->children.size() > 0)
            {
                for (size_t i=0; i<node->children.size(); i++)
                    s.push(node->children[i]);
            }
        }
        
        for (list<int>::iterator i=t.begin(); i!=t.end(); i++)
            ret.push_back(*i);
        
        return ret;
    }
};
