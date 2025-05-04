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
    void trans(int a,vector<vector<int>> &v,TreeNode* root){
        if(!root)return ;
        if(v.size()<=a)v.push_back({root->val});
        else v[a].push_back(root->val);
        trans(a+1,v,root->left);
        trans(a+1,v,root->right);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        trans(0,v,root);
        return v;
    }
};