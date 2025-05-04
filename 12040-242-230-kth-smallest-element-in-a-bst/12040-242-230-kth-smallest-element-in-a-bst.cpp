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
    void addl(TreeNode* root, vector<int> &v){
        if(!root)return;
        v.push_back(root->val);
        addl(root->left,v);
        addl(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        addl(root,v);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};