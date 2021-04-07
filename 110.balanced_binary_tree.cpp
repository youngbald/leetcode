/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //在这个问题里使用了recursion
 
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true; //如果一开始root为空就为空说明两边平衡直接返回true，或者root走完也还一直是true的情况下返回true
        int l = getheight(root->left); //取得左边树深度保存为l
        int r = getheight(root->right);//取得有变数深度保存为r
        if(abs(l-r)<=1){//如果他们俩相减的绝对值小于等于1说明这个分支成立，所以我们在loop里接着往下走，直到root走完或者两边不平衡 
            return isBalanced(root->left)&&isBalanced(root->right);
        }

        return false;//以上条件不成立，某个子叶不平衡就会直接跳出loop返回false

    }
    int getheight(TreeNode* root){//在这里我们先取得左右两边树的最大深度
        if(!root) return 0;
        return max(getheight(root->left),getheight(root->right))+1;
    }

    
};
