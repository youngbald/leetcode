class Solution {
public:
    string tree2str(TreeNode* t) {
        string res = "";//set to empty string first
       if(!t) return res;//if empty, return the result string
       if(!t->left&&!t->right){ //if both left and right are null, append current val into res
           res.append(to_string(t->val));
           return res;
       }
       res.append(to_string(t->val)); //this should be the first value of the tree
       res+=("("+tree2str(t->left)+")"); //add left child into the res with ()
       if(t->right){
           res+=("("+tree2str(t->right)+")"); //add right child into tthe res with ()
       }

        return res; //return the res
    }
 
};
