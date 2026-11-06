
class Solution {
public:
    int ans = 0;
    int height(TreeNode* root){
        if(root == NULL)return 0;
        int left_ht = height(root->left);
        int right_ht = height(root->right);

        ans = max(ans,left_ht + right_ht);
        return max(left_ht,right_ht) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);


        return ans;
    }
};