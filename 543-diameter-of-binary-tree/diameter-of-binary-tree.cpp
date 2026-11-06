
class Solution {
private:
    int height(TreeNode* root){
        if(root == NULL)return 0;
        int left_ht = height(root->left);
        int right_ht = height(root->right);

        return max(left_ht,right_ht) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)return 0;
        int left_diameter = diameterOfBinaryTree(root->left);
        int right_diameter = diameterOfBinaryTree(root->right);
        int current_diameter = height(root->left) + height(root->right);

        return max(max(left_diameter,right_diameter),current_diameter);
    }
};