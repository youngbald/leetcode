//此题考查树的左右对称性,我们可以创建一个helper来检查subtre的对称性

bool isSymmetric(TreeNode * root){
if(!root) return true; //如果没有root必然对称所以是true
return helper(root); 
}

bool helper( TreeNode * a, TreeNode *b){//helper 是用来比较左右子节点的左右对称， 如果左节点的左边相等于右节点的右边，左节点的右边相等于右节点的左边，那么久为true
if(!a&&!b) return true;

if(!a||!b) return false;

return (a->val==b->val&& helper(a->left, b->right)&& helper(a->right, b->left);
}
