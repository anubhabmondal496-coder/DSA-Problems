
class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        int left_ht = height(root->left);
        int right_ht = height(root->right);

        return max(left_ht,right_ht) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        if(abs(height(root->left) - height(root->right)) > 1) return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};