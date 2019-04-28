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
    int maxDepth(Node* root) {
        if (root == NULL)
            return 0;
        
        queue<Node*> s;
        queue<int> deep;
        int n = 1;
        int d;
        s.push(root);
        deep.push(n);
        
        Node* node;
        while (!s.empty())
        {
            node = s.front();
            s.pop();
            d = deep.front();
            deep.pop();
        
            
            if (node->children.size() >0 && d==n)
            {
                n++;
            }
            
            for (size_t i=0;i<node->children.size();i++)
            {     
                s.push(node->children[i]);
                deep.push(n);
            }
        }
        
        return n;
    }
};
