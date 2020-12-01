/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution { 
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {//s是大树，t是子树，如果大树为空返回false
        if(!s) return false;
        return isSubwithRoot(s,t)||isSubtree(s->left,t)||isSubtree(s->right,t);//check for subtree
    }
    bool isSubwithRoot(TreeNode*s, TreeNode*t){//
        if(!t&&!s) return true;//如果两树都为空return true
        if(!t||!s) return false;//if not balanced then it is false
        if(t->val!=s->val) return false;//we now checking if thses two sub trees are equal
        return isSubwithRoot(s->left,t->left)&&isSubwithRoot(s->right,t->right); //checking both data in both trees
    }
};
