
vector<int> res;
vector<int> getLonelyNodes(TreeNode* root) {
if(!root) return res;
helper(root);
return res;
     }
     
void helper(TreeNode* root){

if(!root) return; //root==null back to main;
if(root->left&&!root->right){//there is no right child we push back the left child in to vector
  res.push_back(root->left->val;
 helper(root->left);//keep looking from left
}else if(!root->left&& root->right){
res.push_back(root->right->val);
helper(root->right);
}else{//if we dont find anything here we keep digging
helper(root->left);
helper(root->right);
}
}
