
class Solution {
public:
    bool check(TreeNode* left,TreeNode* right){
        if(left == NULL && right == NULL) return true;
        if(left == NULL || right == NULL) return false;
        else{
            if(left->val != right->val)return false;
        }
        return check(left->left,right->right) && check(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)return true;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        return check(left,right);

    }
};