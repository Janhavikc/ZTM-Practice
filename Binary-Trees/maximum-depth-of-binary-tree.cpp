/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getMaxCount(TreeNode* root, int count){
        if(root == NULL){
            return count;
        }

        count++;
        return max(getMaxCount(root->left, count), getMaxCount(root->right, count));
    }
    int maxDepth(TreeNode* root) {
        return getMaxCount(root, 0);
    }
};
