
class Solution {
private:
    vector<optional<int>> preorder(TreeNode* root){
        vector<optional<int>> sequence;
        if(root == NULL){
            sequence.push_back(nullopt);
            return sequence;
        }
        sequence.push_back(root->val);
        auto left = preorder(root->left);
        auto right = preorder(root->right);

        sequence.insert(sequence.end(), left.begin(), left.end());
        sequence.insert(sequence.end(), right.begin(), right.end());

        return sequence;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<optional<int>> seq_1 = preorder(p);
        vector<optional<int>> seq_2 = preorder(q);
        if(seq_1.size() != seq_2.size()) return false;
        for(int i = 0;i < seq_1.size();i++){
            if(seq_1[i] != seq_2[i]){
                return false;
            }
        }
        return true;
    }
};