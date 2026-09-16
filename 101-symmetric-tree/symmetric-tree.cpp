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
bool helper(TreeNode* left,TreeNode* right){
    if(left==nullptr || right==nullptr){
        return right==left;
    }
    if(right->val!=left->val){
        return false;
    }
    return helper(right->right,left->left) && helper(right->left,left->right);
}
    bool isSymmetric(TreeNode* root) {
        return (root==nullptr )|| helper(root->left,root->right);
        
        
        
    }
};