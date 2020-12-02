int res = INT_MAX;
TreeNode* pre;

int getMinimumDifference(TreeNode* root)
  getMIn(root);
  return res;
}

void getMIn(TreeNode * root){
if(!root) return
getMin(root->left);
if(pre){
res = min(abs(root->val - pre->val), res);
}
pre = root;
getMin(root->right);
}
