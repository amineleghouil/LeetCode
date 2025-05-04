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
    void addl(TreeNode* root,vector<int> &v){
        if(!root)return;
        addl(root->left,v);
        v.push_back(root->val);
        addl(root->right,v);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>v;
        addl(root,v);
        int m=INT_MAX;
        for(int i=1;i<v.size();i++){
            m=min(m,v[i]-v[i-1]);
        }
        return m;
    }
};