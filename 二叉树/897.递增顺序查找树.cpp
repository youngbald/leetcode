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
//使用linked list的用法加上中序遍历
//中序遍历的使用就是先左叶输出然后右叶
    TreeNode* head = new TreeNode(0);//我们会使用到这个linkedlist来保存我们接下来遍历之后的数字
    TreeNode* pre = head;//这个值用来最后返回我们的结果
    TreeNode* increasingBST(TreeNode* root) {
        if(!root) return NULL;
        increasingBST(root->left);
        pre->right = new TreeNode(root->val);//因为我们想要把整个树往右边返回，所以我们设置的结果会一直往右边递加
        pre = pre->right;//设置当前值为下一个值
        increasingBST(root->right);//继续使用中序遍历
        
        
        return head->right;//输出结果为 head（0）的下一位节点
    }
};
