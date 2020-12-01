/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
//这道题里面只提供了一个children节点，所以我们只需要recursion children

class Solution {
public:
    vector<int> res;//先创建一个vector来存结果
    vector<int> preorder(Node* root) {
        
        if(!root) return res;
        res.push_back(root->val);//每一次只要添加root的value进vector就行了
        for(Node* child : root->children){//child为当前节点，只需要循环当前节点到root的最终节点 res就储存完毕
            preorder(child);
        }
        return res;
    }
};
