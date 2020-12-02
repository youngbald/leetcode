//first we need to used 层次遍历存储每层， 再反转整个list
vector<vector<int>> levelOrderBottom(TreeNode* root) {
vector<vector<int>> res;
queue<TreeNode*> q;
q.push(root);
while(!q.empty()){
int count = q.size();
vectot<int> level; //用来获取每层
for(int i =0；i<count;i++){
TreeNode * node = q.front();
q.pop();
level.push_back(node->val);
if(node->left){
q.push(node->left)
}
if(node->right){
q.push(node->right);
}
}//for loop is finished
res.push_back(level);
} //while loop is finished

reverse(res.begin(),res.end());
return res;

}
