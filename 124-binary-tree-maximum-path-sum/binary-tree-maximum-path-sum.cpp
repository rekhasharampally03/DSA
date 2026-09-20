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
int path(TreeNode* root,int& p){
    if(root==nullptr) return 0;
    //if(root->left==nullptr && root->right==nullptr) return root->val;
    int left=max(0,path(root->left,p));
    int right=max(0,path(root->right,p));
    p=max(left+right+root->val,p);
    return root->val+max(left,right);


}
    int maxPathSum(TreeNode* root) {
        int p=INT_MIN;
        path(root,p);
        return p;
        
    }
};