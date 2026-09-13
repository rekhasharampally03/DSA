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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>x;
        if(root==NULL) return x;
        vector<vector<int>>v;
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()!=0){
            int si=q.size();vector<int>s;
            for(int i=0;i<si;i++){
                TreeNode* t=q.front();
                q.pop();
                if(t!=NULL) s.push_back(t->val);
                if(t!=NULL  && t->left!=NULL) q.push(t->left);
                if(t!=NULL && t->right!=NULL) q.push(t->right);
            }
            v.push_back(s);

        }
        reverse(v.begin(),v.end());
        return v;

    }
};