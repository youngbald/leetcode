int maxDepth(TreeNode * root){
int res= 0 ;
if(!root) return res; //stop point;

return max(maxdepeth(root->left),maxDepth(root->right))+1;

}
