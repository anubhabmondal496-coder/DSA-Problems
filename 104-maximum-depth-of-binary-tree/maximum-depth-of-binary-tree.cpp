
class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL)return 0;
        int left_ht = height(root->left);
        int right_ht = height(root->right);

        return max(left_ht,right_ht) + 1;
    }
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};