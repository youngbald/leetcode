int res;
double max = DBL_MAX;
//使用前序遍历，每次遍历对比当前difference跟最大值，更新res
 int closestValue(TreeNode* root, double target) {
 if(!root) return 0;
 if(abs(target-root->val<=max){
    max = (target-root->val);
    res = root->val;
 }
 vlosetValue(root->left,target);
 closetValue(root->right,target);
 
 return res;
 
 
 }
