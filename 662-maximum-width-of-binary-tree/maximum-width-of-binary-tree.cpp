
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>> q;
        int maxwidth = 0;
        q.push({root,0});
        while(q.size() > 0){
            int currlevelsize = q.size();
            unsigned long long stidx = q.front().second;
            unsigned long long endidx = q.back().second;
            maxwidth = max(maxwidth,(int)(endidx - stidx + 1));

            for(int i = 0; i < currlevelsize;i++){
                auto curr = q.front();
                q.pop();
                if(curr.first->left){
                    q.push({curr.first->left,2 * curr.second + 1});
                }
                if(curr.first->right){
                    q.push({curr.first->right,2 * curr.second + 2});
                }
            }
        }
        return maxwidth;
    }
};