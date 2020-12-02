 bool isUnivalTree(TreeNode* root){
 if(!root) return true;
 if(root->left&&root->left->val!=root->val){//人话就是如果左子不等于第一个就false，排错法
 return false;
 }
if(root->right&&root->right->val!=root->val){
return false;
}
return isUivalTree(root->left)&&isUnivalTree(root->right);

}
